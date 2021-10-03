#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon		&_weapon;
	public:
		void	attack( void ) const;

		Weapon			getWeapon( void ) const;
		void			setWeapon( Weapon &weapon);

		HumanA( std::string name, Weapon &weapon );
		~HumanA();
};

#endif