#pragma once

#include <vector>
#include "CartItem.h"

namespace Services::ShoppingCart
{
    class Cart
    {
        public:

        Cart(std::vector<CartItem> &items) : items(items)
        {
        }
        Cart()
        {
        }

        void addItem(const CartItem& item) { this->items.push_back(item); }

        std::vector<CartItem> getItems() const { return this->items; }
        std::vector<CartItem> items;
    };

}