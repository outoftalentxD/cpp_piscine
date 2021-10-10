#pragma once

#include <iostream>
#include <stdexcept>
#include <exception>
#include <ctime>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T*		_content;
		size_t	_size;
	
	public:
		Array( size_t size = 0 );
		virtual ~Array();

		Array( const Array<T>& other );
		Array<T>& operator=( const Array<T>& other);

		T& operator[]( long int index );
		const T& operator[] (long int index ) const;
};

template <typename T>
Array<T>::Array( size_t size ) : _size(size)
{
	this->_content = new T[size];
}

template <typename T>
Array<T>::Array( const Array<T>& other)
{
	if (this->_content)
		delete this->_content;
	this->_size = other._size;
	this->_content = new T[this->_size];
	for (size_t i = 0; i < this->_size; i++)
		this->_content[i] = other._content[i];
}

template <typename T>
Array<T>&	Array<T>::operator=( const Array<T>& other )
{
	if (this != &other)
	{
		if (this->_content)
			delete this->_content;
		this->_size = other._size;
		this->_content = new T[this->_size];
		for (size_t i = 0; i < this->_size; i++)
			this->_content[i] = other._content[i];
	}
	return (this);
}

template <typename T>
T&	Array<T>::operator[]( long int index )
{
	if (index < 0 || index >= (long int)this->_size)
		throw std::out_of_range("Index out of range");
	else
		return (this->_content[index]);
}

template <typename T>
const T&	Array<T>::operator[]( long int index ) const
{
	if (index < 0 || index >= (long int)this->_size)
		throw std::out_of_range("Index out of range");
	else
		return (this->_content[index]);
}

template <typename T>
Array<T>::~Array( )
{
	if (this->_content)
		delete this->_content;
}