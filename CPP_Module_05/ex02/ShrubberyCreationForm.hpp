#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm& operator= ( const ShrubberyCreationForm& other );

	public:
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( const ShrubberyCreationForm& other );
	virtual ~ShrubberyCreationForm() {};
	
	void action( std::string target ) const;
};

#endif