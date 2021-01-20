/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** ex06.hpp
*/

#ifndef EX06_HPP
#define EX06_HPP

#include <iostream>
#include <sstream>

template <typename T, typename U = T>
class Tuple
{
    public:
        T a;
        U b;

        std::string toString() const;
};

template <typename T>
std::string format(const T& value)
{
    (void)value;
    return ("???");
}

std::string format(const int& value)
{
    return ("int:" + std::to_string(value));
}

std::string format(const float& value)
{
    std::ostringstream os;

    os << std::skipws << value;
    return ("float:" + os.str() + "f");
}

std::string format(const std::string& value)
{
    return ("string:\"" + value + "\"");
}

template<typename T, typename U>
std::string Tuple<T, U>::toString() const
{
    std::string result = "[TUPLE [" + format(a) + "] [" + format(b) + "]]";

    return (result);
}

#endif // EX06_HPP