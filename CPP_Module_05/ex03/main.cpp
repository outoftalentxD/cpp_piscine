#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main( void )
{
	Intern	intern;

	Bureaucrat melaena("melaena", 1);

	Form* someForm;
	try
	{
		someForm = intern.makeForm("robotomy request", "Bender");
		melaena.signForm(*someForm);
		melaena.executeForm(*someForm);	
		delete someForm;
		someForm = intern.makeForm("shruberry tree", "garden");
		melaena.signForm(*someForm);
		melaena.executeForm(*someForm);
		delete someForm;
		someForm = intern.makeForm("persedental pordon", "DonPordon");	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
}