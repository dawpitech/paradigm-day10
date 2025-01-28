/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** FruitMixer.hpp
*/

#ifndef FRUITMIXER_HPP
    #define FRUITMIXER_HPP

    #include "IFruitMixer.hpp"

class FruitMixer : public IFruitMixer
{
    public:
        unsigned int mixFruits(FruitBox& box) const override;
        void setBlade(IBlade* blade) override;

    protected:
        IBlade* _blade = nullptr;
};

class SteelBlade : public IFruitMixer::IBlade
{
    public:
        unsigned int operator()(const IFruit& fruit) const override { (void) fruit; return 0; }
};
#endif //FRUITMIXER_HPP
