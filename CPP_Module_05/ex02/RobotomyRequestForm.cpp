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
	static int state = 1;

	if (state % 2)
		std::cout << "*DRZZZzzz DRZZZzzz DRZZZzzz* <" << target << "> has been robotomized successfully" << std::endl;
	else
		std::cout << "<" << target << "> has been not robotomized. Failure" << std::endl;
	state++;
}