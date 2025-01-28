/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** FruitBox.hpp
*/

#ifndef FRUITBOX_HPP
    #define FRUITBOX_HPP

    #include <list>
    #include <ostream>

    #include "IFruit.hpp"

class FruitBox
{
    public:
        explicit FruitBox(unsigned int size);
        ~FruitBox();
        unsigned int getSize() const { return this->_size; }
        unsigned int nbFruits() const{ return this->_queue.size(); }
        bool pushFruit(IFruit* fruit);
        IFruit *popFruit();
        std::ostream& display_content(std::ostream& os) const;

    protected:
        unsigned int _size;
        std::list<IFruit*> _queue;
};

std::ostream& operator<<(std::ostream& os, const FruitBox& fb);
#endif //FRUITBOX_HPP
