#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal( std::string type = "unknown Animal");

		Animal( const Animal& other );
		Animal& operator= ( const Animal& other );
		
		virtual ~Animal( );
		
		virtual void	makeSound( void ) const = 0;
		virtual std::string	getType( void ) const;
		virtual void	printIdeas( int startPos, int endPos ) const;
};

#endif