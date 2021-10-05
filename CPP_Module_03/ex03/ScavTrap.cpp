#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "[ Constructor called ] ScavTrap <" << name << ">: Let's get this party started!" << std::endl << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap( )
{
	std::cout << "[ Destructor called ] ScavTrap <" << this->_name << ">: Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl << std::endl;

}

ScavTrap::ScavTrap( const ScavTrap& scavTrap) : ClapTrap (scavTrap)
{
	this->_name = scavTrap._name;
	this->_hitPoints = scavTrap._hitPoints;
	this->_energyPoints = scavTrap._energyPoints;
	this->_attackDamage = scavTrap._attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
	ClapTrap::operator=(scavTrap);
	return (*this);
}

void	ScavTrap::attack( std::string const & target ) const
{
	std::cout << "Woohoo! In your face!" << std::endl;
	std::cout << "ScavTrap <" << this->_name << ">: attacks <"<< target << ">, causing [ " << this->_attackDamage << " ] points of damage!" << std::endl << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "Times like these, I really start to question the meaning of my existence." << std::endl;
	std::cout << "ScavTrap <" << this->_name << ">: have entered Gate Keeper mode" << std::endl << std::endl;
}