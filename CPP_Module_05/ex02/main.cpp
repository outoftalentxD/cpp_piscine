#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void )
{
	Form* someForm = new PresidentialPardonForm("Don Pardon");
	Form* shrubbery = new ShrubberyCreationForm("garden");
	RobotomyRequestForm robotomy("Bender");
	Bureaucrat melaena("melaena", 2);
	Bureaucrat smallestCog("smallestCog", 145);
	Bureaucrat shurebberMan("Shrubber", 130);

	try
	{
		melaena.executeForm(*someForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------------" << std::endl;
	try
	{
		melaena.signForm(*someForm);
		melaena.signForm(robotomy);
		melaena.executeForm(*someForm);
		melaena.executeForm(robotomy);
		melaena.executeForm(robotomy);
		melaena.executeForm(robotomy);
		smallestCog.executeForm(*someForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------------" << std::endl;
	try
	{
		smallestCog.signForm(*shrubbery);
		shurebberMan.executeForm(*shrubbery);
		smallestCog.executeForm(*shrubbery);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
	delete someForm;
	delete shrubbery;
}