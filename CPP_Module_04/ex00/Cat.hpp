#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat( std::string type = "unknown Cat" );
		
		Cat( const Cat& other );
		Cat& operator= ( const Cat& other );

		~Cat( );

		void	makeSound( void ) const;
};

#endif