/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** BloodOrange.hpp
*/

#ifndef BLOODORANGE_HPP
    #define BLOODORANGE_HPP

#include "Orange.hpp"

class BloodOrange : public Orange
{
    public:
        explicit BloodOrange();
        IFruit* clone() const { return new BloodOrange(*this); }
};

#endif //BLOODORANGE_HPP
