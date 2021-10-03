#include "Zombie.hpp"

int main()
{
	Zombie zombie("beatifulStackZombie");
	zombie.announce();
	std::cout << std::endl;

	Zombie* heapZombie = newZombie("awesomeHeapZombie");
	heapZombie->announce();
	delete heapZombie;
	std::cout << std::endl;

	randomChump("randomShortLivingZombie");
	std::cout << std::endl;
	
	return (0);
}