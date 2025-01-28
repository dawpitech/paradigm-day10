/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** FruitUtils.cpp
*/

#include "FruitUtils.hpp"
#include "ABerry.hpp"
#include "Lemon.hpp"

void FruitUtils::sort(FruitBox& unsorted, FruitBox& lemon, FruitBox& citrus, FruitBox& berry)
{
    auto buffer = FruitBox(unsorted.getSize());
    while (unsorted.nbFruits() > 0) {
        const auto fruit = unsorted.popFruit();

        if (dynamic_cast<Lemon*>(fruit) != nullptr && lemon.nbFruits() < lemon.getSize()) {
            lemon.pushFruit(fruit);
            continue;
        }
        if (dynamic_cast<ACitrus*>(fruit) != nullptr && citrus.nbFruits() < citrus.getSize()) {
            citrus.pushFruit(fruit);
            continue;
        }
        if (dynamic_cast<ABerry*>(fruit) != nullptr && berry.nbFruits() < berry.getSize())
        {
            berry.pushFruit(fruit);
            continue;
        }
        buffer.pushFruit(fruit);
    }
    while(buffer.nbFruits() > 0)
        unsorted.pushFruit(buffer.popFruit());
}
