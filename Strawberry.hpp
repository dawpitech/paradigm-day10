/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** Strawberry.hpp
*/

#ifndef STRAWBERRY_HPP
    #define STRAWBERRY_HPP

    #include "ABerry.hpp"

class Strawberry : public ABerry
{
    public:
        explicit Strawberry();
        IFruit* clone() const { return new Strawberry(*this); }
};
#endif //STRAWBERRY_HPP
