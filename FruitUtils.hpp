/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** FruitUtils.hpp
*/

#ifndef FRUITUTILS_HPP
    #define FRUITUTILS_HPP

    #include "FruitBox.hpp"

class FruitUtils {
    public:
        static void sort(FruitBox& unsorted, FruitBox& lemon, FruitBox& citrus, FruitBox& berry);
        static FruitBox** pack(IFruit** fruits, unsigned int boxSize);
        static IFruit** unpack(FruitBox **fruitBoxes);
};
#endif //FRUITUTILS_HPP
