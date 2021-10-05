#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( std::string type = "unknown wrongCat" );
		
		WrongCat( const WrongCat& other );
		WrongCat& operator= ( const WrongCat& other );

		~WrongCat( );

		void	makeSound( void ) const;
};

#endif