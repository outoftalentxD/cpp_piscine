#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_name = "poorUnknownZombie";
	std::cout << "<" << this->_name << "> " << "The hells reject me!" << std::endl;
}

Zombie::Zombie( std::string name )
{
	this->_name = name;
	std::cout << "<" << name << "> " << "The hells reject me!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->_name << "> " << "Huh, I thought I was dead already..." << std::endl;
}

void Zombie::announce( void )
{
	std::cout << "<" << this->_name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}