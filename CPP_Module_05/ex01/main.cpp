#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    Bureaucrat smallestCog("melaena");
    Form        largestForm("Form", 149, 149);
    

    try
    {
        largestForm.beSigned(smallestCog);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        smallestCog.signForm(largestForm);
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
        std::cout << "Bureaucrat <" << smallestCog.getName() << "> grade is: " << smallestCog.getGrade() << std::endl;
        smallestCog.signForm(largestForm);
        std::cout << "Bureaucrat <" << smallestCog.getName() << "> also can sign Form <" << largestForm.getName() << "> ";
        std::cout << "with grade: " << largestForm.getSignRequiredGrade() << std::endl;
		std::cout << largestForm << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}