/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** ex03.hpp
*/

#ifndef EX03_HPP
#define EX03_HPP

template <typename T>
void foreach(T* array, void (*func)(const T &elem), int size)
{
    for (int ctr = 0; ctr < size; ctr += 1)
        func(array[ctr]);
}

template <typename T>
void print(const T& value)
{
    std::cout << value << std::endl;
}

#endif // EX03_HPP