#pragma once
#include <stdexcept>

template <class T>
void	iter(T *array, size_t size, void (*f)(const T&))
{
	if (!array)
		throw std::invalid_argument("Not null argument required");
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

template <typename T>
void	iter(T* array, size_t size, void (*f)(T& x, int multiplier))
{
	if (!array)
		throw std::invalid_argument("Not null argument required");
	for (size_t i = 0; i < size; i++)
		f(array[i], size);
}
