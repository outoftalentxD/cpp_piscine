#pragma once

#include <iostream>
#include <stdexcept>
#include <exception>
#include <algorithm>

template <typename T>
int&	easyFind( T data, int elem)
{
	typename T::iterator iter = std::find(data.begin(), data.end(), elem);
	if (iter == data.end())
		throw std::invalid_argument("Not found");
	else
	{
		std::cout << "Elem: " << *iter << " Index: " << data.begin() - iter << std::endl;
		return (data.begin() - iter);
	}
}