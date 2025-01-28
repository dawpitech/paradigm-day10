/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** ABerry.hpp
*/

#ifndef ABERRY_HPP
    #define ABERRY_HPP

    #include "AFruit.hpp"

class ABerry: public AFruit
{
    public:
        bool isPeeled() const override { return true; }
        void peel() override {}
};
#endif //ABERRY_HPP
