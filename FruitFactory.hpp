/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** FruitFactory.hpp
*/

#ifndef FRUITFACTORY_HPP
    #define FRUITFACTORY_HPP

    #include <vector>

    #include "IFruit.hpp"

class FruitFactory
{
public:
    ~FruitFactory();

    void registerFruit(IFruit* fruit);
    void unregisterFruit(const std::string& name);
    IFruit* createFruit(const std::string& name) const;

private:
    std::vector<IFruit*> _fruits;
};
#endif //FRUITFACTORY_HPP
