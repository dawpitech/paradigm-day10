/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** FruitFactory.cpp
*/

#include "FruitFactory.hpp"

FruitFactory::~FruitFactory()
{
    while (!this->_fruits.empty()) {
        delete this->_fruits.back();
        this->_fruits.pop_back();
    }
}

void FruitFactory::registerFruit(IFruit* fruit)
{
    if (fruit == nullptr)
        return;
    for (const auto elem : this->_fruits) {
        if (elem->getName() == fruit->getName())
            return;
    }
    this->_fruits.push_back(fruit);
}

void FruitFactory::unregisterFruit(const std::string& name)
{
    for (unsigned int idx = 0; idx < this->_fruits.size(); idx++) {
        if (this->_fruits[idx]->getName() == name) {
            delete this->_fruits[idx];
            this->_fruits.erase(this->_fruits.begin() + idx);
            break;
        }
    }
}

IFruit* FruitFactory::createFruit(const std::string& name) const
{
    const IFruit* fruit_template = nullptr;
    for (const auto elem : this->_fruits) {
        if (elem->getName() == name)
            fruit_template = elem;
    }
    if (fruit_template == nullptr)
        return nullptr;
    return fruit_template->clone();
}
