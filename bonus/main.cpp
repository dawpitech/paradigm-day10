/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** main.cpp
*/

#include <iostream>

#include "Hack.hpp"
#include "IFruit.hpp"
#include "Strawberry.hpp"

int main()
{
    IFruit* fruit = new Strawberry;
    Hack* hack = reinterpret_cast<Hack*>(fruit);
    std::cout << *fruit << std::endl;
    hack->hack(1138);
    std::cout << *fruit << std::endl;
    delete fruit;
    return 0;
}
