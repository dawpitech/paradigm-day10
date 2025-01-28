/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** AFruit.hpp
*/

#ifndef AFRUIT_HPP
    #define AFRUIT_HPP

    #include "IFruit.hpp"

class AFruit : public IFruit
{
public:
    unsigned int getVitamins() const override
        { return this->isPeeled() ? this->_vitamins : 0; }
    std::string getName() const override { return this->_name; }
    bool isPeeled() const override { return this->_isPeeled; }
    void peel() override { this->_isPeeled = true; }
};
#endif //AFRUIT_HPP
