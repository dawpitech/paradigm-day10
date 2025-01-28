/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** main.cpp
*/

#include "Coconut.hpp"
#include <iostream>
#include "Strawberry.hpp"

#include "FruitBox.hpp"
#include "FruitUtils.hpp"
#include "Lemon.hpp"

int main()
{
    IFruit** fruits = new IFruit*[26];

    fruits[0] = new Strawberry();
    fruits[1] = new Strawberry();
    fruits[2] = new Strawberry();
    fruits[3] = new Strawberry();
    fruits[4] = new Strawberry();
    for (unsigned int i = 5; i < 25; i++)
        fruits[i] = new Lemon();
    fruits[25] = nullptr;
    fruits[24] = new Coconut();
    FruitBox** boxes = FruitUtils::pack(fruits, 6);
    FruitBox* box = nullptr;

    for (unsigned int j = 0; (box = boxes[j]) != nullptr; j++)
    {
        std::cout << *box << std::endl;
    }

    std::cout << "======" << std::endl;

    const auto unpackedFruits = FruitUtils::unpack(boxes);
    for (unsigned int idx = 0; unpackedFruits[idx] != nullptr; idx++) {
        std::cout << *unpackedFruits[idx] << std::endl;
    }
    return 0;
}
