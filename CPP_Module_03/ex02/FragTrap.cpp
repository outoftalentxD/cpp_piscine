#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name) : ClapTrap(name)
{
	std::cout << "[ Contructor called ] FragTrap <" << name << ">: Ready to go on where you are, friend." << std::endl << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap( )
{
	std::cout << "[ Destructor called ] ClapTrap <" << this->_name << ">: I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl << std::endl;
}

FragTrap::FragTrap( const FragTrap& fragTrap) : ClapTrap( fragTrap )
{

}

FragTrap&	FragTrap::operator=( const FragTrap& fragTrap)
{
	ClapTrap::operator=(fragTrap);
	return (*this);
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "<"<< this->_name << ">: Secret handshake!" << std::endl << std::endl;
}