/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** ex05.hpp
*/

#ifndef EX05_HPP
#define EX05_HPP

#include <iostream>

template <typename T>
class array
{

    private:
        T *_array;
        std::size_t _size;

    public:
        array();
        array(std::size_t n);
        array(const array<T>& copy);

        void dump() const;
        T& operator[](std::size_t index);
        array& operator=(const array<T>& other);

        std::size_t size() const { return (_size); }

        template <typename U>
        array<U> convertTo(U (*func)(const T& value));

};

template<typename T>
array<T>::array() :
_array(nullptr),
_size(0)
{}

template<typename T>
array<T>::array(std::size_t n) :
_array(new T[n]),
_size(n)
{
    for (std::size_t ctr = 0; ctr < _size; ctr += 1)
        _array[ctr] = T();
}

template<typename T>
array<T>::array(const array<T>& copy) :
_array(new T[copy._size]),
_size(copy._size)
{
    for (std::size_t ctr = 0; ctr < _size; ctr += 1)
        _array[ctr] = T(copy._array[ctr]);
}

template<typename T>
T& array<T>::operator[](std::size_t index)
{
    if (_size == 0 || index > _size - 1) {
        if (std::is_const<decltype(*this)>::value)
            throw std::exception();

        T *newArray = new T[index + 1];
        std::size_t newCtr = 0;

        for (std::size_t ctr = 0; ctr < _size; ctr += 1, newCtr += 1)
            newArray[ctr] = T(_array[ctr]);
        for (newCtr = _size; newCtr <= index; newCtr += 1)
            newArray[newCtr] = T();
        delete []_array;
        _array = newArray;
        _size = index + 1;
    }
    return (_array[index]);
}

template<typename T>
array<T>& array<T>::operator=(const array<T>& other)
{
    delete []_array;
    _array = new T[other._size];
    _size = other._size;
    for (std::size_t ctr = 0; ctr < other._size; ctr += 1)
        _array[ctr] = T(other._array[ctr]);
    return (*this);
}

template<typename T>
void array<T>::dump() const
{
    std::cout << "[";
    for (std::size_t ctr = 0; ctr < _size; ctr += 1) {
        if (ctr)
            std::cout << ", ";
        std::cout << _array[ctr];
    }
    std::cout << "]" << std::endl;
}

template <>
void array<bool>::dump() const
{
    std::cout << "[";
    for (std::size_t ctr = 0; ctr < _size; ctr += 1) {
        if (ctr)
            std::cout << ", ";
        std::cout << (_array[ctr] ? "true" : "false");
    }
    std::cout << "]" << std::endl;
}

template<typename T>
template<typename U>
array<U> array<T>::convertTo(U (*func)(const T& value))
{
    array<U> result(_size);
    for (std::size_t ctr = 0; ctr < _size; ctr += 1)
        result[ctr] = func(_array[ctr]);
    return (result);
}

#endif // EX05_HPP