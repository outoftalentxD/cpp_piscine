#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	protected:
        Form& operator= ( const Form& other );

    private:
        const std::string   _name;
        const int           _signRequiredGrade;
        const int           _execRequiredGrade;
        bool                _signed;
    
    
    public:
        Form( std::string name = "default Form", int signRequiredGrade = 150, int execRequiredGrade = 150);
        
        Form( const Form& other );
        
        virtual ~Form() {};

        int         getSignRequiredGrade( void ) const;
        int         getExecRequiredGrade( void ) const;
        bool        getFormSignedState( void ) const;
        std::string getName( void ) const;

        void beSigned( const Bureaucrat& bureaucrat );
		void execute( Bureaucrat const & executor ) const;
		virtual void action( std::string target ) const = 0;

        class GradeTooLowException : public std::exception
        {
            const char * what () const throw ();
        };

        class GradeTooHighException : public std::exception
        {
            const char * what () const throw ();
        };

		class FormNotSignedException : public std::exception
		{
			const char * what () const throw ();
		};
};

std::ostream& operator<< ( std::ostream& os, const Form& data );

#endif