/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** Grapefruit.hpp
*/

#ifndef GRAPEFRUIT_HPP
    #define GRAPEFRUIT_HPP

    #include "ACitrus.hpp"

class Grapefruit : public ACitrus
{
    public:
        explicit Grapefruit();
        IFruit* clone() const { return new Grapefruit(*this); }
};
#endif //GRAPEFRUIT_HPP
