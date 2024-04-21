#pragma once

#include <Core/enums/layer.h>
#include <Core/macros.h>
#include <Core/api/graphics/textures.h>

namespace core::api::graphics {
    class CORE_DLLEXPORT Sprite {
    public:
        enum class Anchor {
            MiddleCenter,
            TopLeft,
            TopCenter,
            TopRight,
            MiddleLeft,
            MiddleRight,
            BottomLeft,
            BottomCenter,
            BottomRight,
        };

        explicit Sprite();
        explicit Sprite(app::GameObject* parent);
        explicit Sprite(Anchor anchor);
        Sprite(app::GameObject* parent, Anchor anchor);

        ~Sprite();

        Sprite(Sprite const&) = delete;

        void anchor(Anchor anchor) const;
        void layer(Layer l) const;
        void local_position(app::Vector3 p) const;
        void local_scale(app::Vector3 s) const;
        void local_rotation(float r) const;

        bool enabled() const;
        void enabled(bool value) const;

        void texture(const std::shared_ptr<textures::TextureData>& texture_data, std::optional<textures::MaterialParams> params = std::nullopt);
        void set_parent(app::GameObject* parent) const;

        app::GameObject* get_game_object() const;

    private:
        app::GameObject* m_root;
        app::Renderer* m_renderer;

        std::shared_ptr<textures::TextureData> m_texture_data;
        std::optional<textures::MaterialParams> m_texture_params;
    };
} // namespace core
