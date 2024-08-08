#pragma once

#include <variant>
#include <memory>

#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/il2cpp_math.h>

#include <Core/property/reactivity.h>

template<typename T> requires core::is_not_uber_state<T>
struct core::Property<T> {
    using value_type = std::variant<
        std::shared_ptr<T>,
        set_get<T>
    >;

    Property() {
        m_value = std::make_shared<T>();
    }

    explicit Property(const T &value) {
        m_value = std::make_shared<T>(value);
    }

    explicit Property(const value_type &value) {
        m_value = value;
    }

    explicit Property(setter<T> set, getter<T> get) {
        m_value = std::make_tuple(set, get);
    }

    Property(Property const &other) {
        operator=(other);
    }

    [[nodiscard]] T get() const {
        switch (m_value.index()) {
            case 0:
                notify_used(reactivity::PropertyDependency(m_id));
                return *std::get<0>(m_value);
            case 1:
                notify_used(reactivity::PropertyDependency(m_id));
                return std::get<1>(std::get<1>(m_value))();
            default:
                throw std::exception("Unhandled variant in Property");
        }
    }

    void set(T const &value) const {
        switch (m_value.index()) {
            case 0: {
                *std::get<0>(m_value) = value;
                break;
            }
            case 1: {
                std::get<0>(std::get<1>(m_value))(value);
                break;
            }
            default:
                throw std::exception("Unhandled variant in Property");
        }

        notify_changed(reactivity::PropertyDependency(m_id));
    }

    void set(const float x, const float y) const requires std::is_same_v<T, app::Vector2> {
        set(app::Vector2{x, y});
    }

    void set(const float x, const float y, const float z) const requires std::is_same_v<T, app::Vector3> {
        set(app::Vector3{x, y, z});
    }

    void add(T const& value) const requires can_add<T> {
        set(get() + value);
    }

    void add(const float x, const float y) const requires std::is_same_v<T, app::Vector2> {
        set(get() + app::Vector2{x, y});
    }

    void add(const float x, const float y, const float z) const requires std::is_same_v<T, app::Vector3> {
        set(get() + app::Vector3{x, y, z});
    }

    void assign(value_type value) {
        m_value = value;
        notify_changed(reactivity::PropertyDependency(m_id));
    }

    void assign(setter<T> set, getter<T> get) {
        m_value = std::make_tuple(set, get);
        notify_changed(reactivity::PropertyDependency(m_id));
    }

    std::string to_string() const {
        return std::format("{}", get());
    }

    Property &operator=(const Property &other) {
        m_value = std::make_shared<T>(get());
        notify_changed(reactivity::PropertyDependency(m_id));
        return *this;
    }

    Property make_shallow_copy() const {
        return Property(get());
    }

    template<typename K>
    Property<K> wrap() const {
        return Property<K>(
            [&](auto value) mutable { set(value); },
            [&] { return get(); }
        );
    }

private:
    const unsigned int m_id = reactivity::reserve_property_id();
    value_type m_value = nullptr;
};
