#pragma once

#include <cstdlib>
#include <ctime>
#include <vector>

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <limits>

class Span
{
	private:
		unsigned int _size;
		std::list<int> _data;

	public:
		Span( unsigned int size = 0);
		Span( const Span& other );
		Span& operator=( const Span& other );
		virtual ~Span();

		void addNumber( const int& elem );
		template<typename T>
		void addNumber(T it1, T it2)
		{
			if (static_cast<unsigned int>(std::distance(it1, it2)) > _size - _data.size())
				throw std::overflow_error("Not enough space to store elems");
			else
				for (; it1 != it2; it1++)
					addNumber(*it1);
		}

		long int	shortestSpan( void );
		long int 	longestSpan( void );

};