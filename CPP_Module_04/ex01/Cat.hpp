#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat( std::string type = "unknown Cat" );
		
		Cat( const Cat& other );
		Cat& operator= ( const Cat& other );

		~Cat( );

		void	makeSound( void ) const;
		Brain&	evilGenius( void ) const;
		void	printIdeas( int startPos, int endPos ) const; 
};

#endif