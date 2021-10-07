#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm& operator= ( const PresidentialPardonForm& other );
	
	public:
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( const PresidentialPardonForm& other );
	virtual ~PresidentialPardonForm() {};
	
	void action( std::string target ) const;
};

#endif