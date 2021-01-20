/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** ex00.hpp
*/

#ifndef EX00_HPP
#define EX00_HPP

template <typename T>
void swap(T& a, T& b)
{
    T tmp = a;

    a = b;
    b = tmp;
}

template <typename T>
T min(T& a, T& b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T>
T max(T& a, T& b)
{
    if (a > b)
        return (a);
    return (b);
}

template <typename T>
T add(T& a, T& b)
{
    return (a + b);
}

#endif // EX00_HPP