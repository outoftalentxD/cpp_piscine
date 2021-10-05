#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->_hitPoints = fragTrapHitPoints;
	this->_energyPoints = scavTrapEnergyPoints;
	this->_attackDamage = fragTrapAttackDamage;
	std::cout << "[ Constructor called ] DiamondTrap <" << this->_name << ">: Hey, best friend!" << std::endl << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& diamondTrap) : ClapTrap( diamondTrap ), ScavTrap( diamondTrap), FragTrap( diamondTrap )
{

}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	ClapTrap::operator=(diamondTrap);
	return (*this);
}

DiamondTrap::~DiamondTrap( )
{
	std::cout << "[ Destructor called ] DiamondTrap <" << this->_name << ">: No fair! I wasn't ready." << std::endl << std::endl;
}

void	DiamondTrap::attack( std::string const & target ) const
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void ) const
{
	std::cout << "[ DiamondTrap ] My name is: <" << this->_name << "> and my ClapTrapName is: <" << ClapTrap::_name << ">" << std::endl << std::endl;
}

void	DiamondTrap::getParams( void ) const
{
	std::cout << "[ DiamondTrap ] <" << this->_name << ">: My parameters!:" << std::endl;
	std::cout << "_hitPoints: " << this->_hitPoints << std::endl;
	std::cout << "_energyPoints: " << this->_energyPoints << std::endl;
	std::cout << "_attackDamage: " << this->_attackDamage << std::endl << std::endl;
}