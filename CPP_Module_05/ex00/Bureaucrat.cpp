#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name ) : _name(name)
{
    this->_grade = _lowestGrade;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
    if (grade < _highestGrade)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > _lowestGrade)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ) : _name(other._name), _grade(other._grade)
{

}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other )
{
    if (this != &other)
    {
        std::cout << "Cannot assign const _name. _grade assigned" << std::endl;
        this->_grade = other._grade;
    }
    return (*this);
}

int Bureaucrat::getGrade( void ) const
{
    return (this->_grade);
}

std::string Bureaucrat::getName( void ) const
{
    return (this->_name);
}

void Bureaucrat::incrementGrade( void )
{
    if (this->_grade != _highestGrade)
        this->_grade--;
    else
        throw Bureaucrat::GradeTooHighException();
    
}

void Bureaucrat::decrementGrade( void )
{
    if (this->_grade != _lowestGrade)
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

const char * Bureaucrat::GradeTooHighException::what() const throw ()
{
    return ("Grade is too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw ()
{
    return ("Grade is too low");
}