/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** ex01.hpp
*/

#ifndef EX01_HPP
#define EX01_HPP

template <typename T>
int compare(const T&a, const T& b)
{
    if (a == b)
        return (0);
    if (a > b)
        return (1);
    return (-1);
}

int compare(const char* a, const char* b)
{
    if (a == b)
        return (0);
    if (a > b)
        return (1);
    return (-1);
}

#endif // EX01_HPP