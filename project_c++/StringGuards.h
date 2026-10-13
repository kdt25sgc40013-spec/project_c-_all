#pragma once
#include <string>
#include <stdexcept>
#include <limits>

inline void ensure_can_grow(const std::string& s, size_t extra) {
    const auto max = s.max_size();
    if (extra > max || s.size() > max - extra) {
        throw std::length_error("string growth would exceed max_size()");
    }
}

inline void safe_reserve(std::string& s, size_t new_cap) {
    if (new_cap > s.max_size()) throw std::length_error("requested reserve too large");
    s.reserve(new_cap);
}

inline void safe_append(std::string& s, const std::string& other) {
    ensure_can_grow(s, other.size());
    s.append(other);
}