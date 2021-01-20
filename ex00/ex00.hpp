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
T min(const T& a, const T& b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T>
T max(const T& a, const T& b)
{
    if (a > b)
        return (a);
    return (b);
}

template <typename T>
T add(const T& a, const T& b)
{
    return (a + b);
}

#endif // EX00_HPP