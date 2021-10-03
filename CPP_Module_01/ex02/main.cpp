#include <iostream>
#include <string>

int main()
{
	std::string content = "HI THIS IS BRAIN";

	std::string* strPTR = &content;
	std::string& strREF = content;

	std::cout << "String place in memory: " << &content << std::endl;
	std::cout << "PTR: 			" << strPTR << std::endl;
	std::cout << "REF:			" << &strREF << std::endl;

	std::cout << std::endl;

	std::cout << "PTR content: " << *strPTR << std::endl;
	std::cout << "REF content: " << strREF << std::endl;
	return (0);	
}