/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** main.cpp
*/

#include <iostream>

#include "Coconut.hpp"
#include "FruitBox.hpp"
#include "Raspberry.hpp"
#include "BloodOrange.hpp"
#include "Almond.hpp"
#include "FruitFactory.hpp"

int main()
{
    FruitFactory factory;
    factory.registerFruit(new Raspberry);
    factory.registerFruit(new BloodOrange);
    factory.registerFruit(new Almond);
    factory.registerFruit(new Coconut);
    factory.registerFruit(new Almond);
    factory.unregisterFruit("banana");
    factory.unregisterFruit("coconut");
    IFruit* fruit1 = factory.createFruit("almond");
    IFruit* fruit2 = factory.createFruit("coconut");
    IFruit* fruit3 = factory.createFruit("tomato");
    std::cout << *fruit1 << std::endl;
    std::cout << fruit2 << std::endl;
    std::cout << fruit3 << std::endl;
    delete fruit1;
    return 0;
}
