#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        const int           _signRequiredGrade;
        const int           _execRequiredGrade;
        bool                _signed;
    
        Form& operator= ( const Form& other );
    
    public:
        Form( std::string name = "default Form", int signRequiredGrade = 150, int execRequiredGrade = 150);
        
        Form( const Form& other );
        
        virtual ~Form() {};

        int         getSignRequiredGrade( void ) const;
        int         getExecRequiredGrade( void ) const;
        bool        getFormSignedState( void ) const;
        std::string getName( void ) const;

        void beSigned( const Bureaucrat& bureaucrat );

        class GradeTooLowException : public std::exception
        {
            const char * what () const throw ();
        };

        class GradeTooHighException : public std::exception
        {
            const char * what () const throw ();
        };
};

#endif