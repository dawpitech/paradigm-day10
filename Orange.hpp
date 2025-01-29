/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** Orange.hpp
*/

#ifndef ORANGE_HPP
    #define ORANGE_HPP

    #include "ACitrus.hpp"

class Orange : public ACitrus
{
    public:
        explicit Orange();
        IFruit* clone() const override { return new Orange(*this); }
};
#endif //ORANGE_HPP
