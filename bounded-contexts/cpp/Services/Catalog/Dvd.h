#pragma once

#include "ItemId.h"

namespace Services::Catalog
{
    class Dvd : public IItem
    {
        public:
        Dvd(ItemId& id, double weight = 2) : IItem(id, weight) {};
        Dvd(const ItemId& id, double weight = 2) : IItem(id, weight) {};
    };
}