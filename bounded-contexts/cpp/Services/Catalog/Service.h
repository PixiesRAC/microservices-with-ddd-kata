#pragma once

#include "IItem.h"
#include <unordered_map>

namespace Services::Catalog
{
    class Service
    {
        public:
        
        double getWeight(const Services::Catalog::ItemId &itemId) const // return std::optionnal
        {
            auto weight = itemWeights.find(itemId);
            if (weight != itemWeights.end())
            {
                return weight->second;
            }
            return 0.0;
        };
        bool addItem(Services::Catalog::IItem &item)
        {
            itemWeights[item.getItemId()] = item.getWeight();
            return true;
        }

        std::unordered_map<Services::Catalog::ItemId, double>    itemWeights;
    };
}