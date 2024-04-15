#pragma once

#include "Services/Catalog/ItemId.h"

namespace Services::ShoppingCart
{
    class CartItem
    {
        public:

        CartItem(const Services::Catalog::ItemId& itemId, int quantity) : itemId(itemId)
        {
            this->quantity = quantity;
        }

        const Services::Catalog::ItemId         &itemId;
        int                                     quantity;
    };
}