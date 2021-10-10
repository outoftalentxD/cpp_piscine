#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main( void )
{
	std::vector<int> vec(0);
	std::srand(time(0));
	int elem = rand() % 20;
	for (int i = 0; i < 10; i++)
		vec.push_back(std::rand() % 20);
	try
	{
		std::cout << easyFind(vec, elem) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	for (int i = 0; i < 10; i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;

	return (0);
}
