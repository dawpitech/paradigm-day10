/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** FruitMixer.cpp
*/

#include <iostream>

#include "FruitMixer.hpp"

void FruitMixer::setBlade(IBlade* blade)
{
    if (blade == nullptr)
        return;
    this->_blade = blade;
}

unsigned int FruitMixer::mixFruits(FruitBox& box) const
{
    if (this->_blade == nullptr) {
        std::cout << "mixer has no blade\n";
        return 0;
    }
    unsigned int vitamins = 0;
    auto buffer = FruitBox(box.getSize());
    while (box.nbFruits() > 0) {
        const auto elem = box.popFruit();
        if (!elem->isPeeled()) {
            buffer.pushFruit(elem);
            continue;
        }
        vitamins += elem->getVitamins();
    }
    while (buffer.nbFruits() > 0)
        box.pushFruit(buffer.popFruit());
    return vitamins;
}
