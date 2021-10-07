#ifndef ROBOTOMYREQUESTEDFORM_HPP
# define ROBOTOMYREQUESTEDFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:

	public:
	RobotomyRequestForm( std::string name = "default Robotomy");

	RobotomyRequestForm( const RobotomyRequestForm& other );
	RobotomyRequestForm& operator= ( const RobotomyRequestForm& other );
	virtual ~RobotomyRequestForm() {};
	
	void action( std::string target ) const;
};

#endif