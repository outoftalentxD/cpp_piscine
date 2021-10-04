#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap( std::string name = "ScavTrap");

		ScavTrap( const ScavTrap& scavTrap);
		ScavTrap& operator=(const ScavTrap& ScavTrap);

		~ScavTrap( );

		void	guardGate( void );
};

#endif
