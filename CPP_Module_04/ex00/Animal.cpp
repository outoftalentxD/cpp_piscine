#include "Animal.hpp"

Animal::Animal( std::string type ) : _type(type) 
{
	std::cout << "[Constructor] Animal <" << type << ">" << std::endl;
}

Animal::Animal( const Animal& other ) : _type(other._type)
{

}

Animal&	Animal::operator=( const Animal& other )
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Animal::~Animal( )
{
	std::cout << "[Destructor] Animal <" << this->_type << ">" << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "Common animal sound!" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->_type);
}