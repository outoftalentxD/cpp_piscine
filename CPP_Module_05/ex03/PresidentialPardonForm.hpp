#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:

	public:
	PresidentialPardonForm( std::string name = "default Pardon" );
	PresidentialPardonForm( const PresidentialPardonForm& other );
	PresidentialPardonForm& operator= ( const PresidentialPardonForm& other );
	virtual ~PresidentialPardonForm() {};
	
	void action( std::string target ) const;
};

#endif