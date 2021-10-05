#include "WrongCat.hpp"

WrongCat::WrongCat( std::string type ) : WrongAnimal( type )
{
	std::cout << "[Constructor] WrongCat <" << type << ">" << std::endl;
}

WrongCat::WrongCat( const WrongCat& other) : WrongAnimal ( other )
{

}

WrongCat&	WrongCat::operator=( const WrongCat& other )
{
	WrongAnimal::operator=(other);
	return (*this);
}

WrongCat::~WrongCat( )
{
	std::cout << "[Destructor] WrongCat <" << this->_type << ">" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Unique wrongCat sound!" << std::endl;
}
