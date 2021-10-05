#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal( std::string type = "unknown Animal");

		Animal( const Animal& other );
		Animal& operator= ( const Animal& other );
		
		virtual ~Animal( );
		
		virtual void	makeSound( void ) const;
		virtual std::string	getType( void ) const;
};

#endif