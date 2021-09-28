﻿using System;
using System.ComponentModel;
using System.Net;
using System.Threading;
using Google.Protobuf;
using Network;
using WebSocketSharp;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Linq;

namespace RandoMainDLL {
  public static class WebSocketClient {
    public static BlockingCollection<Packet> SendQueue = new BlockingCollection<Packet>();
    public static BlockingCollection<UberStateUpdateMessage> UberStateQueue = new BlockingCollection<UberStateUpdateMessage>();
    public static string Domain { get => AHK.IniString("Paths", "URL", "wotw.orirando.com"); }
    public static string S { get => AHK.IniFlag("Insecure") ? "" : "s";}
    private static readonly string JWTFile = ".jwt";

    public static bool ExpectingDisconnect = false;
    public static int ReconnectCooldown = 0;
    public static int FramesSinceLastCheck = 0;
    private static string ServerAddress => $"ws{S}://{Domain}/api/game_sync/";

    private static Thread updateThread;
    private static Thread connectThread;

    public static int FramesTillReconnectAttempt = 420;

    public static bool WantConnection { get => !AHK.IniFlag("DisableNetcode") && (SeedController.Settings?.NetcodeEnabled ?? false); }

    private static WebSocket socket;

    public static bool IsConnected { get { return socket != null && socket.IsConnected; } }
    public static bool CanSend { get { return IsConnected && socket.ReadyState == WebSocketState.Open; } }
    public static bool Connecting { get => connectThread?.IsAlive ?? false; }
    public static void Connect() {
      if (!WantConnection) return;
      setupUpdateThread();
      if (Connecting) {
        Randomizer.Log("Skipping connection request as one is in-progress", false, "DEBUG");
        FramesTillReconnectAttempt = 120;
        return;
      }

      Multiplayer.ClearMultiverse();
      connectThread = new Thread(() => {
        if (socket != null)
          Disconnect();

        ExpectingDisconnect = false;
        try {
          socket = new WebSocket(ServerAddress, null);
          if (!AHK.IniFlag("Insecure"))
            socket.SslConfiguration.EnabledSslProtocols = System.Security.Authentication.SslProtocols.Tls12;

          socket.Log.Level = LogLevel.Info;
          socket.Log.Output = (logdata, output) => {
            try {
              if (logdata != null)
                Randomizer.Log($"Websocket says: {logdata.Message}", false, $"{logdata.Level}");
              else
                Randomizer.Log($"Websocket output: {output}", false);
            } catch (Exception e) {
              Randomizer.Error("Websocket log", e, false);
            }
          };
          socket.OnError += (sender, e) => {
            Randomizer.Error("WebSocket", $"{e} {e?.Exception}", false);
            FramesTillReconnectAttempt = 600;
          };
          socket.OnClose += (sender, e) => {
            Randomizer.Log($"Closing socket ({e?.Code}: {e?.Reason})");
            if (!ExpectingDisconnect)
              Randomizer.Log("Disconnected! Retrying in 5s");
          };
          socket.OnMessage += HandleMessage;
          socket.OnOpen += (sender, args) => {
            Randomizer.Log($"Connected to server", false);
            string jwt = System.IO.File.ReadAllText(Randomizer.BasePath + JWTFile).Trim();
            SendAuthenticate(jwt);
            UberStateController.QueueSyncedStateUpdate();
          };
          Randomizer.Log($"Attempting to connect to {Domain}", false);
          socket.Connect();
        } catch (Exception e) {
          FramesTillReconnectAttempt = 120;
          Randomizer.Error("Connect (socket.)", e, false); 
        }

      });
      connectThread.Start();
    }

    public static void Update() {
      if (WantConnection && !IsConnected && !Connecting) {
        if (FramesTillReconnectAttempt-- <= 0) {
          FramesTillReconnectAttempt = 600;
          Randomizer.Log("Want connection but currently have none, attempting reconnect", false);
          Connect();
        }
      }
    }

    private static bool stopping = false;
    private static ManualResetEvent stopEvent = new ManualResetEvent(false);
    private static CancellationTokenSource source = new CancellationTokenSource();
    private static void setupUpdateThread() {
      if (updateThread == null) {
        updateThread = new Thread(() => {
          while (true) {
            try {
              while (true) {
                if (CanSend) {
                  var packet = SendQueue.Take(source.Token);
                  socket.Send(packet.ToByteArray());
                }
              }
            }
            catch (OperationCanceledException e) { }
            catch (Exception e) {
              Randomizer.Warn("WebSocket.UpdateThread", $"caught error {e}");
            }

            try {
              if (stopping) {
                ExpectingDisconnect = true;
                socket.Close();
                socket = null;
                SendQueue.Clear();
                UberStateQueue.Clear();
                source.Dispose();
                source = new CancellationTokenSource();
                stopping = false;
                stopEvent.Set();
              }
            }
            catch (Exception e) {
              Randomizer.Warn("WebSocket.UpdateThread", $"caught error {e}");
            }
          }
        });

        updateThread.Start();
      }
    }

    public static void Disconnect() {
      if (IsConnected && !stopping && !source.IsCancellationRequested) {
        stopping = true;
        source.Cancel(true);
        stopEvent.WaitOne();
        stopEvent.Reset();
      }
    }

    public static void SendBulk(Dictionary<Memory.UberId, double> updates) {
      try {
        var batch = new UberStateBatchUpdateMessage();
        batch.Updates.AddRange(updates.Select((kv) => kv.Key.MakeUpdateMsg(kv.Value)));
        Packet packet = new Packet {
          Id = 7,
          Packet_ = batch.ToByteString()
        };
        SendQueue.Add(packet);

      }
      catch (Exception e) { Randomizer.Error("SendBulk", e, false);  }

}
    public static void SendUpdate(Memory.UberId id, double value) {
      try {
        Packet packet = new Packet {
          Id = 3,
          Packet_ = id.MakeUpdateMsg(value).ToByteString()
        };
        SendQueue.Add(packet);
      } catch(Exception e) { Randomizer.Error("SendUpdate", e, false);  }
    }

    public static void SendAuthenticate(string jwt) {
      try {
        var authenticate = new AuthenticateMessage();
        authenticate.Jwt = jwt;
        Packet packet = new Packet {
          Id = 9,
          Packet_ = authenticate.ToByteString()
        };
        SendQueue.Add(packet);
      }
      catch (Exception e) { Randomizer.Error("SendAuthenticate", e, false); }
    }

    private static void HandleMessage(object sender, MessageEventArgs args) {
      try {
        var data = args.RawData;
        if (data == null) {
          Randomizer.Log("received message with no data!");
          return;
        }
        var packet = Packet.Parser.ParseFrom(data);
        switch (packet.Id) {
          case 7:
            var messages = UberStateBatchUpdateMessage.Parser.ParseFrom(packet.Packet_);
            foreach (var us in messages.Updates)
              UberStateQueue.Add(us);
            break;
          case 6:
            var printMsg = PrintTextMessage.Parser.ParseFrom(packet.Packet_);
            Msg.Print(printMsg.Text, printMsg.Frames, printMsg.Ypos, true);
            break;
          case 5:
            var init = InitBingoMessage.Parser.ParseFrom(packet.Packet_);
            UberStateController.SyncedUberStates = init.UberId.Select(s => s.IdFromMsg()).ToHashSet(); // LINQ BAAAYBEEEEEE
            break;
          case 3:
            try {
              UberStateQueue.Add(UberStateUpdateMessage.Parser.ParseFrom(packet.Packet_));
            } catch(Exception e) { Randomizer.Error("UberStateQueue.Add", e); }
            break;
          case 12:
            var authenticated = AuthenticatedMessage.Parser.ParseFrom(packet.Packet_);
            UDPSocketClient.Start(authenticated.UdpId, authenticated.UdpKey.ToByteArray());
            Multiplayer.Queue.Add(packet);
            break;
          case 8:
            Multiplayer.Queue.Add(packet);
            break;
          default:
            break;
        }
      }
      catch (Exception t) {
        Randomizer.Error("t", t);
      }
    }
  }
}
