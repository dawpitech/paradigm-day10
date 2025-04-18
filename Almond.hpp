/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** Almond.hpp
*/

#ifndef ALMOND_HPP
    #define ALMOND_HPP

    #include "ANut.hpp"

class Almond : public ANut
{
    public:
        explicit Almond();
        IFruit* clone() const { return new Almond(*this); }
};
#endif //ALMOND_HPP
