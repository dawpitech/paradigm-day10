/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** IFruit.cpp
*/

#include <ostream>

#include "IFruit.hpp"

std::ostream& operator<<(std::ostream& os, const IFruit& fruit)
{
    os << "[name: \"" << fruit.getName() << "\", vitamins: "
        << fruit.getVitamins() << ", peeled: "
        << (fruit.isPeeled() ? "true" : "false") << "]";
    return os;
}
