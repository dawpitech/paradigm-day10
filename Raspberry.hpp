/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** Raspberry.hpp
*/

#ifndef RASPBERRY_HPP
    #define RASPBERRY_HPP

    #include "ABerry.hpp"

class Raspberry : public ABerry
{
    public:
        explicit Raspberry();
        IFruit* clone() const { return new Raspberry(*this); }
};
#endif //RASPBERRY_HPP
