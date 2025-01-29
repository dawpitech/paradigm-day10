/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** main.cpp
*/

#include <iostream>

#include "Coconut.hpp"
#include "FruitBox.hpp"
#include "FruitUtils.hpp"
#include "Grapefruit.hpp"
#include "IFruit.hpp"
#include "Orange.hpp"
#include "Raspberry.hpp"

int main()
{
    FruitBox* boxes[5];
    FruitBox a(2);
    FruitBox b(2);
    FruitBox c(2);
    FruitBox d(2);
    boxes[0] = &a;
    boxes[1] = &b;
    boxes[2] = &c;
    boxes[3] = &d;
    boxes[4] = nullptr;
    a.pushFruit(new Orange());
    c.pushFruit(new Raspberry());
    d.pushFruit(new Coconut());
    d.pushFruit(new Grapefruit());
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;

    IFruit **fruits = FruitUtils::unpack(boxes);
    std::cout << "unpacked boxes:" << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;

    std::cout << "unpacked fruits:" << std::endl;
    for (int i = 0; fruits[i] != nullptr; i++) {
        std::cout << *fruits[i] << std::endl;
    }
}
