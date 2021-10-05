#include "Dog.hpp"

Dog::Dog( std::string type ) : Animal( type )
{

}

Dog::Dog( const Dog& other) : Animal ( other )
{

}

Dog&	Dog::operator=( const Dog& other )
{
	Animal::operator=(other);
	return (*this);
}

Dog::~Dog( )
{
	
}

void	Dog::makeSound( void ) const
{
	std::cout << "Unique dog sound!" << std::endl;
}