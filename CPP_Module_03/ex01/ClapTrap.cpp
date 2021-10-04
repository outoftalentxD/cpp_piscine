#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name )
{
	std::cout << "[ Constructor called ] Claptrap <" << name << ">: Does this mean I can start dancing? Pleeeeeeaaaaase?" << std::endl << std::endl; 
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::~ClapTrap( )
{
	std::cout << "[ Destructor called ] Claptrap <" << this->_name << ">: Ahem, ahem. What's going on? Did I break something?" << std::endl << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& clapTrap)
{
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& clapTrap)
{
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	return (*this);
}

void ClapTrap::attack( std::string const & target )
{
	std::cout << "Gloves are comin' off!. One, two... PUNCH!" << std::endl;
	std::cout << "ClapTrap <" << this->_name << ">: attacks <"<< target << ">, causing [ " << this->_attackDamage << " ] points of damage!" << std::endl << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "Eww, get lost!" << std::endl;
	std::cout << "ClapTrap <" << this->_name << ">: is attacked and lost [ " << amount << " ] energy points" << std::endl << std::endl;
	this->_energyPoints -= amount;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;

}

void ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "Why do I feel radioactive!?" << std::endl;
	std::cout << "ClapTrap [" << this->_name << "] is repaired and recieved [ " << amount << " ] energy points" << std::endl << std::endl;
	this->_energyPoints += amount;
}
