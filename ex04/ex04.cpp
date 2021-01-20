/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** ex04.cpp
*/

#include "ex04.hpp"

template <typename T>
Tester<T>::Tester()
{}

template <>
Tester<int>::Tester()
{}

template <>
Tester<float>::Tester()
{}

template <>
Tester<double>::Tester()
{}

template <>
Tester<std::string>::Tester()
{}

template <typename T>
bool Tester<T>::equal(const T& a, const T& b) const
{
    if (a == b)
        return (true);
    return (false);
}

template <>
bool Tester<int>::equal(const int& a, const int& b) const
{
    if (a == b)
        return (true);
    return (false);
}

template <>
bool Tester<float>::equal(const float& a, const float& b) const
{
    if (a == b)
        return (true);
    return (false);
}

template <>
bool Tester<double>::equal(const double& a, const double& b) const
{
    if (a == b)
        return (true);
    return (false);
}

template <>
bool Tester<std::string>::equal(const std::string& a, const std::string& b) const
{
    if (a == b)
        return (true);
    return (false);
}