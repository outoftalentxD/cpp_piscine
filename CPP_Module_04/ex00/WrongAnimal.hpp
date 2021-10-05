#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal( std::string type = "unknown wrongAnimal");

		WrongAnimal( const WrongAnimal& other );
		WrongAnimal& operator= ( const WrongAnimal& other );
		
		~WrongAnimal( );
		
		void	makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif