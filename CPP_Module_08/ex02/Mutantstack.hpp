#pragma once

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
		MutantStack();

		MutantStack( const MutantStack<T>& other );
		MutantStack& operator=( const MutantStack<T>& other );

		virtual ~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator				begin( void );
		const_iterator			cbegin( void ) const;
		reverse_iterator		rbegin( void );
		const_reverse_iterator	rbegin( void ) const;

		iterator				end( void );
		const_iterator			cend( void ) const;
		reverse_iterator		rend( void );
		const_reverse_iterator	rend( void ) const;
};

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin( void )
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cbegin( void ) const
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin( void )
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin( void ) const
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end( void ) 
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cend( void ) const
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend( void ) 
{
	return (this->c.rend());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend( void ) const
{
	return (this->c.rend());
}

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{

}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack<T>& other ) : std::stack<T>(other)
{

}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=( const MutantStack<T>& other )
{
	(void)other;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{

}