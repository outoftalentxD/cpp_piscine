#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	
	public:
		DiamondTrap( std::string name = "DefaultDiamondTrap" );

		DiamondTrap( const DiamondTrap& diamondTrap );
		DiamondTrap&	operator=( const DiamondTrap& diamondTrap );

		~DiamondTrap( );
		
		void getParams( void ) const;
		void attack( std::string const & target ) const;
		void whoAmI( void ) const;
};


#endif