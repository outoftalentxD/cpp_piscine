#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( std::string type ) : _type(type) 
{

}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) : _type(other._type)
{

}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& other )
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal( )
{
	
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Common wrongAnimal sound!" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}