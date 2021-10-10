#include "Array.hpp"

int main( void )
{
	int size = 10;
	
	std::srand(time(0));
	Array<int>arr = Array<int>(size);
	for (int i = 0; i < size; i++)
	{
		arr[i] = std::rand() % size;
	}
	std::cout << "array: ";
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	return (0);
}