#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

#include "Form.hpp"
class Form;

class Bureaucrat
{
    private:
        const std::string	_name;
        int					_grade;
        static const int	_lowestGrade = 150;
        static const int	_highestGrade = 1;

        Bureaucrat& operator= ( const Bureaucrat& other );

    public:
        Bureaucrat( std::string name = "Bureaucrat" );
        Bureaucrat( std::string name, int grade );
        Bureaucrat( const Bureaucrat& other );

        virtual ~Bureaucrat() {};
        
        int getLowestGrade( void ) const;
        int getHighestGrade( void ) const;
        int getGrade( void ) const;
        std::string getName( void ) const;
        
        void    incrementGrade( void );
        void    decrementGrade( void );  

        void    signForm( Form& form );
		void	executeForm( const Form& form );
        class   GradeTooLowException : public std::exception
        {
            const char * what () const throw ();
        };
        
        class   GradeTooHighException : public std::exception
        {
            const char * what () const throw ();
        };
};

std::ostream& operator<< ( std::ostream& os, const Bureaucrat& data );

#endif