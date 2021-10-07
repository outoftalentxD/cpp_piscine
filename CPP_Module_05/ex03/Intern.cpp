#include "Intern.hpp"

Intern::Intern( const Intern& other )
{
	(void)other;
}

Intern&	Intern::operator=( const Intern& other )
{
	(void)other;
	return (*this);
}

const char * Intern::NoSuchFormException::what() const throw()
{
	return ("No such form");
}

Form*	Intern::newShruberryForm( std::string target )
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::newPresidentialForm( std::string target )
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::newRobotomyForm( std::string target )
{
	return (new RobotomyRequestForm(target));
} 

Form*	Intern::noSuchFormFound( std::string target )
{
	(void)target;
	throw Intern::NoSuchFormException();
	return (0);
}

Form*	Intern::makeForm( std::string name, std::string target )
{
	std::string forms[3] = {
					"robotomy request",
					"shruberry tree",
					"presidetial pardon"};

	Form* (Intern::*funcs[4])( std::string target ) = { 
										&Intern::newRobotomyForm,
										&Intern::newShruberryForm, 
										&Intern::newPresidentialForm,
										&Intern::noSuchFormFound};

	Form* ret;
	int i;

	for (i = 0; i < 3 && forms[i] != name; i++)
		;
	ret = (this->*funcs[i])(target); 
	std::cout << "Intern creates <" << name << ">";
	return (ret);
}