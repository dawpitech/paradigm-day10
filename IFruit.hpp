/*
** EPITECH PROJECT, 2025
** paradigm-day10
** File description:
** IFruit.hpp
*/

#ifndef IFRUIT_HPP
    #define IFRUIT_HPP

    #include <string>

class IFruit
{
    public:
        virtual ~IFruit() = default;
        virtual unsigned int getVitamins() const = 0;
        virtual std::string getName() const = 0;
        virtual bool isPeeled() const = 0;
        virtual void peel() = 0;
        virtual IFruit* clone() const = 0;

    protected:
        unsigned int _vitamins = 0;
        bool _isPeeled = false;
        std::string _name;
};

std::ostream& operator<<(std::ostream& os, const IFruit& fruit);
#endif //IFRUIT_HPP
