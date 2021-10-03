#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:
		void announce( void );
		void setName( std::string name);

		Zombie();
		Zombie( std::string name );
		~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif
