#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{

}

void	HumanA::attack( void ) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

Weapon	HumanA::getWeapon( void ) const
{
	return (this->_weapon);
}

void	HumanA::setWeapon( Weapon &weapon)
{
	this->_weapon = weapon;
}