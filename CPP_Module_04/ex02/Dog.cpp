#include "Dog.hpp"

Dog::Dog( std::string type ) : Animal( type )
{
	std::cout << "[Constructor] Dog <" << type << ">" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( const Dog& other) : Animal ( other )
{
	if (other._brain)
		this->_brain = new Brain(*other._brain);
	else
		this->_brain = new Brain();
}

Dog&	Dog::operator=( const Dog& other )
{
	if (this != &other)
	{
		Animal::operator=(other);
		if (this->_brain)
			delete this->_brain;
		if (other._brain)
			this->_brain = new Brain(*other._brain);
		else
			this->_brain = new Brain();
	}
	return (*this);
}

Dog::~Dog( )
{
	std::cout << "[Destructor] Dog <" << this->_type << ">" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Unique dog sound!" << std::endl;
}

void	Dog::printIdeas( int startPos, int endPos ) const
{
	std::cout << "Dog <" << this->_type << ">: Woof, my ideas:" << std::endl;
	if (startPos < 0)
		startPos = 0;
	if (endPos >= 100)
		endPos = 100;
	for (int i = startPos; i < endPos; i++)
		std::cout << this->_brain->getIdea(i) << std::endl;
	std::cout << std::endl;
}

Brain&	Dog::evilGenius( void ) const
{
	return (*this->_brain);
}