#include "Span.hpp"

Span::Span( const unsigned int size ) : _size(size)
{
	
}

Span::Span( const Span& other ) : _size(other._size)
{
	this->_data.clear();
	this->_data = other._data;
}

Span&	Span::operator=( const Span& other )
{
	if (this != &other)
	{
		this->_size = other._size;
		this->_data.clear();
		this->_data = other._data;
	}
	return (*this);
}

Span::~Span()
{
	_data.clear();
}

void Span::addNumber( const int& elem )
{
	if (_data.size() == _size)
		throw std::overflow_error("Not enough space to store elem");
	else
		_data.push_back(elem);
}

long int	Span::shortestSpan( void )
{
	long int min = static_cast<long int>(std::numeric_limits<int>::max());
	std::list<int>::iterator it1 = _data.begin();
	std::list<int>::iterator it2 = ++_data.begin();
	for (; it2 != _data.end(); it1++)
	{
		if (abs(*it1 - *it2) < min)
			min = abs(*it1 - *it2);
		it2++;
	}
	return (min);
}

long int	Span::longestSpan( void ) 
{
	if (_data.size() < 2)
		throw std::length_error("No span for list length lower than 2");
	long int max = static_cast<long int>(std::numeric_limits<int>::min());
	std::list<int>::iterator it1 = _data.begin();
	std::list<int>::iterator it2 = _data.begin();
	it2++;
	for (; it2 != _data.end(); it1++)
	{
		if (abs(*it1 - *it2) > max)
			max = abs(*it1 - *it2);
		it2++;
	}
	return (max);
}