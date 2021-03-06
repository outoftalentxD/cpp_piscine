#include "Ice.hpp"

Ice::Ice( std::string const & type ) : AMateria( type )
{

}

Ice::Ice( const Ice& other ) : AMateria( other )
{

}

Ice& Ice::operator=( const Ice& other )
{
    if (this != &other )
        AMateria::operator=(other);
    return (*this);
}

Ice::~Ice( )
{

}

AMateria*   Ice::clone( void ) const
{
    return (new Ice(this->_type));
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}