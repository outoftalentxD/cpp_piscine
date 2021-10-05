#include "WrongCat.hpp"

WrongCat::WrongCat( std::string type ) : WrongAnimal( type )
{

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
	
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Unique wrongCat sound!" << std::endl;
}
