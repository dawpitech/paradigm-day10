/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** Lemon.hpp
*/

#ifndef LEMON_HPP
    #define LEMON_HPP

    #include "ACitrus.hpp"

class Lemon : public ACitrus
{
    public:
        explicit Lemon();
        IFruit* clone() const { return new Lemon(*this); }
};
#endif //LEMON_HPP
