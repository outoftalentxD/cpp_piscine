#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string baseName )
{
	Zombie* zombieHorde = new Zombie[N];
	
	for (int i = 0; i < N; ++i)
		zombieHorde[i].setName(baseName + static_cast<char>(i + '1'));
	return (zombieHorde);
}