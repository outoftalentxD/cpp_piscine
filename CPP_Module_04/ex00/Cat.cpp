#include "Cat.hpp"

Cat::Cat( std::string type ) : Animal( type )
{
	std::cout << "[Constructor] Cat <" << type << ">" << std::endl;
}

Cat::Cat( const Cat& other) : Animal ( other )
{

}

Cat&	Cat::operator=( const Cat& other )
{
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

Cat::~Cat( )
{
	std::cout << "[Destructor] Cat <" << this->_type << ">" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Unique cat sound!" << std::endl;
}
