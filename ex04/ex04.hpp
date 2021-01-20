/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** ex04.hpp
*/

#ifndef EX04_HPP
#define EX04_HPP

#include <string>

template <typename T>
bool equal(const T& a, const T& b)
{
    if (a == b)
        return (true);
    return (false);
}

template <typename T>
class Tester
{

    public:
        Tester();

        bool equal(const T& a, const T&b) const;

};

#endif // EX04_HPP