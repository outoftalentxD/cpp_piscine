#include "Bureaucrat.hpp"

int main( void )
{
    Bureaucrat smallestCog("melaena");
    
    try
    {
        smallestCog.decrementGrade();
        std::cout << smallestCog.getName() << " don't care about restrictions" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat newBureaucrat("someone", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        smallestCog.incrementGrade();
        smallestCog.incrementGrade();
        smallestCog.incrementGrade();
        smallestCog.incrementGrade();
        std::cout << "Bureaucrat <" << smallestCog.getName() << ">: I live according the rules and got 4 raises in a row!" << std::endl;
		std::cout << smallestCog << std::endl;
		// std::cout << "Bureaucrat <" << smallestCog.getName() << "> grade is: " << smallestCog.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}