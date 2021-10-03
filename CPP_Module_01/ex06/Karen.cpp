#include "Karen.hpp"

Karen::Karen()
{

}

Karen::~Karen()
{

}

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ] ";
	std::cout << "I love to get extra bacon ";
	std::cout << "for my 7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "[ INFO ] ";
	std::cout << "I cannot believe adding extra bacon ";
	std::cout << "cost more money. You don’t put enough! If you did ";
	std::cout << "I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ] ";
	std::cout << "I think I deserve to have some";
	std::cout << "extra bacon for free. I’ve been coming here for ";
	std::cout << "years and you just started working here last month.";
	std::cout << std::endl;
}

void	Karen::error( void )
{
	std::cout << "[ ERROR ] ";
	std::cout << "This is unacceptable, I want ";
	std::cout << "to speak to the manager now.";
	std::cout << std::endl;
}

void	Karen::none( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Karen::complain( std::string level )
{

	int i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (levels[i] != level && i < 4)
		i++;
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			this->none();
			break;
	}
}
