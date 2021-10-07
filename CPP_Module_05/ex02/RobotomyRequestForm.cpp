#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string name ) : Form(name, 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& other ) : Form( other )
{

}

RobotomyRequestForm& RobotomyRequestForm::operator= ( const RobotomyRequestForm& other )
{
	if (this != &other)
		Form::operator=(other);
	return (*this);
}

void	RobotomyRequestForm::action( std::string target ) const
{
	std::cout << "ZrhzghzrhzrhzzrHZrhhzRHghzehhrzh <" << target << "> > has been robotomized successfully 50% of the time." << std::endl;
}