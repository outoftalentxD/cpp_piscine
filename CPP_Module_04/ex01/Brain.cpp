#include "Brain.hpp"

Brain::Brain( )
{
	std::cout << "God gave the brain!" << std::endl;
}

Brain::Brain( const Brain& other )
{
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = other._ideas[i];
}

Brain&	Brain::operator=( const Brain& other )
{
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}

Brain::~Brain( )
{
	std::cout << "Brain has been lost..." << std::endl;
}

void	Brain::setIdea( std::string idea, int position )
{
	if (position < 100 && position > -1)
		this->_ideas[position] = idea;
}

std::string	Brain::getIdea( int position ) const
{
	if (position < 100 && position > -1)
		return (this->_ideas[position]);
	else
		return ("No idea...");
}




