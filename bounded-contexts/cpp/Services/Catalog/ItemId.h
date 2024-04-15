#pragma once

#include <string_view>
#include <functional>  // Required for std::hash

namespace Services::Catalog
{
    class ItemId
    {
        public:

        ItemId(std::string_view id) : id(id) {};

        bool operator==(const ItemId& other) const
        {
            return id == other.id;
        }
        std::string_view getId() const { return id; }

        std::string_view id;
    };
}

// Specializing std::hash for ItemId to be used in unordered_map
namespace std
{
    template <>
    struct hash<Services::Catalog::ItemId>
    {
        std::size_t operator()(const Services::Catalog::ItemId& itemId) const noexcept
        {
            return std::hash<std::string_view>{}(itemId.id);
        }
    };
}