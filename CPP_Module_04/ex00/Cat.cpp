#include "Cat.hpp"

Cat::Cat( std::string type ) : Animal( type )
{

}

Cat::Cat( const Cat& other) : Animal ( other )
{

}

Cat&	Cat::operator=( const Cat& other )
{
	Animal::operator=(other);
	return (*this);
}

Cat::~Cat( )
{
	
}

void	Cat::makeSound( void ) const
{
	std::cout << "Unique cat sound!" << std::endl;
}
