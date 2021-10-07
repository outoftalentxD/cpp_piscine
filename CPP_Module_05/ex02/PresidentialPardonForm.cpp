#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string name ) : Form(name, 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& other ) : Form( other )
{

}

PresidentialPardonForm& PresidentialPardonForm::operator= ( const PresidentialPardonForm& other )
{
	if (this != &other)
		Form::operator=(other);
	return (*this);
}

void	PresidentialPardonForm::action( std::string target ) const
{
	std::cout << "<" << target << "> has been pardoned by Zafod Beeblebrox" << std::endl;
}