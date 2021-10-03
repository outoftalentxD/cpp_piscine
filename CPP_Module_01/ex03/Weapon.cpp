#include "Weapon.hpp"

Weapon::Weapon()
{
	this->_type = "RandomWeapon";
}

Weapon::Weapon( std::string type ) : _type(type)
{
}

Weapon::~Weapon()
{

}

std::string const &	Weapon::getType( void ) const
{
	return (this->_type);
}

void Weapon::setType( std::string type)
{
	this->_type = type;
}