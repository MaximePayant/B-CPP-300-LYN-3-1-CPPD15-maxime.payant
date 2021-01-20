/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** ex02.hpp
*/

#ifndef EX02_HPP
#define EX02_HPP

#include <iostream>

template <typename T>
T min(const T& a, const T& b)
{
    std::cout << "template min" << std::endl;
    if (a <= b)
        return (a);
    return (b);
}

int min(int a, int b)
{
    std::cout << "non-template min" << std::endl;
    if (a <= b)
        return (a);
    return (b);
}

template <typename T>
T templateMin(T* array, int size)
{
    T tmp = array[0];

    for (int ctr = 1; ctr < size; ctr += 1)
        if (tmp > array[ctr])
            tmp = array[ctr];
    return (tmp);
}

int templateMin(int* array, int size)
{
    int tmp = array[0];

    for (int ctr = 1; ctr < size; ctr += 1)
        if (tmp > array[ctr])
            tmp = array[ctr];
    return (tmp);
}

#endif // EX02_HPP