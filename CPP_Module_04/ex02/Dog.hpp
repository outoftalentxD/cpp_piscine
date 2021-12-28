#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;
	public:
		Dog( std::string type = "unknown Dog" );
		
		Dog( const Dog& other );
		Dog& operator= ( const Dog& other );

		~Dog( );

		void	makeSound( void ) const;
		void	printIdeas( int startPos, int endPos ) const;
		void	setIdea( std::string idea, int pos );
		
};

#endif