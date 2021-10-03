
#include "PhoneBook.hpp"


int main(void)
{
	PhoneBook phoneBook;
	std::string line;

	std::cout << "Enter new command" << std::endl;
	while (std::cin >> line)
	{
		if (line == "EXIT")
			return 0;
		else if (line == "ADD")
			phoneBook.getNewContact();
		else if (line == "SEARCH")
		{
			phoneBook.printContacts();
		}
		else
			std::cout << "[X] Error: 'ADD'/'EXIT'/'SEARCH' expected" << std::endl;
		std::cout << "Enter new command:" << std::endl;
	}
}