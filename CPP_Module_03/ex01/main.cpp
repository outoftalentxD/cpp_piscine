#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	{
		ClapTrap clapTrap("Some Clap Trap");
		ScavTrap scavTrap("melaena");
		ScavTrap otherScavTrap = scavTrap;
		
		clapTrap.attack("target");
		scavTrap.attack("scavTrap target");
		scavTrap.guardGate();
	}
	return (0);
}