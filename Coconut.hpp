/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** Coconut.hpp
*/

#ifndef COCONUT_HPP
    #define COCONUT_HPP

    #include "ANut.hpp"

class Coconut : public ANut
{
    public:
        explicit Coconut();
        IFruit* clone() const { return new Coconut(*this); }
};
#endif //COCONUT_HPP
