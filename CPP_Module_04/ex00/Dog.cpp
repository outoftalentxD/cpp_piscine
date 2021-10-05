#include "Dog.hpp"

Dog::Dog( std::string type ) : Animal( type )
{
	std::cout << "[Constructor] Dog <" << type << ">" << std::endl;
}

Dog::Dog( const Dog& other) : Animal ( other )
{

}

Dog&	Dog::operator=( const Dog& other )
{
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

Dog::~Dog( )
{
	std::cout << "[Destructor] Dog <" << this->_type << ">" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Unique dog sound!" << std::endl;
}