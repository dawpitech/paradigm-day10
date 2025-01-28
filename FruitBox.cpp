/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** FruitBox.cpp
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(const unsigned int size)
{
    this->_size = size;
}

FruitBox::~FruitBox()
{
    while (!this->_queue.empty()) {
        delete this->_queue.front();
        this->_queue.pop_front();
    }
}

bool FruitBox::pushFruit(IFruit* fruit)
{
    if (this->getSize() == this->nbFruits())
        return false;

    for (const auto elem : this->_queue) {
        if (elem == fruit)
            return false;
    }

    this->_queue.push_back(fruit);
    return true;
}

IFruit* FruitBox::popFruit()
{
    if (this->nbFruits() == 0)
        return nullptr;
    const auto elem = this->_queue.front();
    this->_queue.pop_front();
    return elem;
}

std::ostream& FruitBox::display_content(std::ostream& os) const
{
    os << "[";

    bool isFirst = true;
    auto queue_cpy = this->_queue;
    while (!queue_cpy.empty()) {
        if (!isFirst)
            os << ", ";
        isFirst = false;
        os << *queue_cpy.front();
        queue_cpy.pop_front();
    }

    os << "]";
    return os;
}


std::ostream& operator<<(std::ostream& os, const FruitBox& fb)
{
    return fb.display_content(os);
}
