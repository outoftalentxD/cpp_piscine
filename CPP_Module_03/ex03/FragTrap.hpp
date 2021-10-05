#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		static const int fragTrapHitPoints = 100;
		static const int fragTrapEnergyPoints = 100;
		static const int fragTrapAttackDamage = 30;

		FragTrap( std::string name = "FragTrap");

		FragTrap( const FragTrap& );
		FragTrap& operator=( const FragTrap& );
		
		~FragTrap( );

		void attack( std::string const & target ) const;
		void highFivesGuys( void );
};

#endif