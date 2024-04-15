#pragma once

#include "ItemId.h"

namespace Services::Catalog
{
    class IItem
    {
        public:

            IItem(ItemId& id, double weight) : itemId(id), weight(weight){};
            IItem(const ItemId& id, double weight) : itemId(id), weight(weight){};

            ItemId  getItemId() const { return itemId; }
            double  getWeight() const { return weight; }
            ItemId  itemId;
            double  weight{0};
    };
}