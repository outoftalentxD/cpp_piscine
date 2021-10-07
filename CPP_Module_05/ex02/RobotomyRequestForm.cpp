#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45, target)
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
	std::cout << "ZrhzghzrhzrhzzrHZrhhzRHghzehhrzh <" << target << "> has been robotomized successfully 50% of the time." << std::endl;
}