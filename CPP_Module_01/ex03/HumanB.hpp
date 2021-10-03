#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon		*_weapon;
	public:
		void	attack( void ) const;

		Weapon	getWeapon( void ) const;
		void	setWeapon( Weapon &weapon);

		HumanB( std::string name);
		~HumanB();
};

#endif