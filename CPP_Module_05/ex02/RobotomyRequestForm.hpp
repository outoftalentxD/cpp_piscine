#ifndef ROBOTOMYREQUESTEDFORM_HPP
# define ROBOTOMYREQUESTEDFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string _target;
		RobotomyRequestForm& operator= ( const RobotomyRequestForm& other );
	public:
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( const RobotomyRequestForm& other );
	virtual ~RobotomyRequestForm() {};
	
	void action( std::string target ) const;
};

#endif