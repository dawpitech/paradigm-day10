/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** FruitUtils.cpp
*/

#include "FruitUtils.hpp"

#include <iostream>

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

FruitBox** FruitUtils::pack(IFruit** fruits, unsigned int boxSize)
{
    if (fruits == nullptr || boxSize == 0)
        return nullptr;
    int nbFruits;
    for (nbFruits = 0; fruits[nbFruits] != nullptr; nbFruits++) {}
    const unsigned int nbBox = nbFruits / boxSize + (nbFruits % boxSize == 0 ? 0 : 1);

    auto** boxes = new FruitBox*[nbBox + 1];
    boxes[nbBox] = nullptr;
    for (unsigned int idx = 0; idx < nbBox; idx++) {
        boxes[idx] = new FruitBox(boxSize);
    }
    unsigned int boxIdx = 0;
    for (int idx = 0; idx < nbFruits; idx++) {
        while (!boxes[boxIdx]->pushFruit(fruits[idx])) { boxIdx++; }
    }
    return boxes;
}

IFruit** FruitUtils::unpack(FruitBox** fruitBoxes)
{
    if (fruitBoxes == nullptr)
        return nullptr;
    unsigned int nbFruits = 0;
    for (int boxIdx = 0; fruitBoxes[boxIdx] != nullptr; boxIdx++) {
        nbFruits += fruitBoxes[boxIdx]->nbFruits();
    }
    auto** fruits = new IFruit*[nbFruits + 1];
    fruits[nbFruits] = nullptr;
    int boxIdx = 0;
    for (unsigned int idx = 0; idx < nbFruits; idx++) {
        auto elem = fruitBoxes[boxIdx]->popFruit();
        while (elem == nullptr) {
            boxIdx++;
            elem = fruitBoxes[boxIdx]->popFruit();
        }
        fruits[idx] = elem;
    }
    return fruits;
}
