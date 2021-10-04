#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clapTrap("Some Clap Trap");
	ScavTrap scavTrap("melaena");

	clapTrap.attack("target");
	scavTrap.attack("scavTrap target");
	scavTrap.guardGate();
	return (0);
}