#include "Cure.hpp"

Cure::Cure( std::string const & type ) : AMateria( type )
{

}

Cure::Cure( const Cure& other ) : AMateria( other )
{

}

Cure& Cure::operator=( const Cure& other )
{
    if (this != &other )
        AMateria::operator=(other);
    return (*this);
}

Cure::~Cure( )
{

}

AMateria*   Cure::clone( void ) const
{
    return (new Cure(this->_type));
}

void    Cure::use( ICharacter& target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}