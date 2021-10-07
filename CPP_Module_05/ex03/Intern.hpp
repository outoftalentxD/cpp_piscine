#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		Form*	newShruberryForm( std::string target );
		Form*	newRobotomyForm( std::string target );
		Form*	newPresidentialForm( std::string target );
		Form*	noSuchFormFound( std::string target );
	public:
		Intern() {};

		Intern( const Intern& other );
		Intern& operator=( const Intern& other );

		virtual ~Intern() {};

		Form*	makeForm( std::string name, std::string target );
		
		class NoSuchFormException : public std::exception
		{
			const char * what() const throw();
		};
};

#endif