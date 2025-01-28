/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** main.cpp
*/

#include <iostream>


#include "Orange.hpp"
#include "Strawberry.hpp"
#include "Lemon.hpp"
#include "Almond.hpp"
#include "FruitBox.hpp"

int main()
{
    FruitBox box(3);
    const FruitBox& cref = box;
    box.pushFruit(new Orange());
    box.pushFruit(new Strawberry());
    box.pushFruit(new Lemon());
    std::cout << cref << std::endl;
    IFruit* tmp = new Almond();
    std::cout << box.pushFruit(tmp) << std::endl;
    delete tmp;
    tmp = box.popFruit();
    delete tmp;
    std::cout << cref << std::endl;
    return 0;
}
