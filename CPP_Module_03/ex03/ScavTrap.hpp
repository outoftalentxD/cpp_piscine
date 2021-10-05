#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		static int const scavTrapHitPoints = 100;
		static int const scavTrapEnergyPoints = 50;
		static int const scavTrapAttackDamage = 20;

		ScavTrap( std::string name = "ScavTrap");

		ScavTrap( const ScavTrap& scavTrap);
		ScavTrap& operator=(const ScavTrap& ScavTrap);

		~ScavTrap( );

		void	attack( std::string const & target ) const;
		void	guardGate( void );
};

#endif
