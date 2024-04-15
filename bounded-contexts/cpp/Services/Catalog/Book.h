#pragma once

#include "IItem.h"

namespace Services::Catalog
{
    class Book : public IItem
    {
        public:
        Book() = default;
        Book(ItemId& id, double weight = 5) : IItem(id, weight) {}
        Book(const ItemId& id, double weight = 5) : IItem(id, weight) {}
    };
}