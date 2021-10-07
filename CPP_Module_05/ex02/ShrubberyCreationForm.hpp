#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:

	public:
	ShrubberyCreationForm( std::string name = "default Shrubbery" );

	ShrubberyCreationForm( const ShrubberyCreationForm& other );
	ShrubberyCreationForm& operator= ( const ShrubberyCreationForm& other );
	virtual ~ShrubberyCreationForm() {};
	
	void action( std::string target ) const;
};

#endif