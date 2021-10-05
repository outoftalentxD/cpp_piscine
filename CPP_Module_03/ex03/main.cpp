#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap melaena("melaena");
	
	melaena.whoAmI();
	melaena.attack("someone");
	melaena.takeDamage(10);
	melaena.beRepaired(20);
	melaena.getParams();
	return(0);
}