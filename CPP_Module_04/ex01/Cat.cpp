#include "Cat.hpp"

Cat::Cat( std::string type ) : Animal( type )
{
	std::cout << "[Constructor] Cat <" << type << ">" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat( const Cat& other) : Animal ( other )
{
	if (other._brain)
		this->_brain = new Brain(*other._brain);
	else
		this->_brain = new Brain();
}

Cat&	Cat::operator=( const Cat& other )
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->_brain;
		if (other._brain)
			this->_brain = new Brain(*other._brain);
		else
			this->_brain = new Brain();
	}
	return (*this);
}

Cat::~Cat( )
{
	std::cout << "[Destructor] Cat <" << this->_type << ">" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Unique cat sound!" << std::endl;
}

void	Cat::printIdeas( int startPos, int endPos ) const
{
	std::cout << "Cat <" << this->_type << ">: Mrrr, my ideas:" << std::endl;
	if (startPos < 0)
		startPos = 0;
	if (endPos >= 100)
		endPos = 100;
	for (int i = startPos; i < endPos; i++)
		std::cout << this->_brain->getIdea(i) << std::endl;
	std::cout << std::endl;
}

Brain&	Cat::evilGenius( void ) const
{
	return (*this->_brain);
}