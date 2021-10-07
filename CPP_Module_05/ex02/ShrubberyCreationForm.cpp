#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string name ) : Form(name, 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& other ) : Form( other )
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator= ( const ShrubberyCreationForm& other )
{
	if (this != &other)
		Form::operator=(other);
	return (*this);
}

void	ShrubberyCreationForm::action( std::string target ) const
{
	std::string filename = target + "_shruberry.ascii";;
	std::ofstream	fout(filename.c_str());

	fout << "      !      " << std::endl;
	fout << "     <!>     " << std::endl;
	fout << "    <<!>>    " << std::endl;
	fout << "   <<<!>>>   " << std::endl;
	fout << "  <<<<!>>>>  " << std::endl;
	fout << " <<<<<!>>>>> " << std::endl;
	fout << "<<<<<<!>>>>>>" << std::endl;
	fout << "<<<<<<!>>>>>>" << std::endl;
	fout << "      !      " << std::endl;
	fout << "______!______" << std::endl;
}
