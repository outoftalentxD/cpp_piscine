#include "Zombie.hpp"

int main()
{

	int N = 8;

	Zombie* horde = zombieHorde(N, "zombieSoldier");
	
	for (int i = 0; i < N; ++i)
	{
		std::cout << "[" << i + 1 << "] ";
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}