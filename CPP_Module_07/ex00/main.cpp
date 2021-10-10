#include "whatever.hpp"
#include "Awesome.hpp"

int main ( void )
{
	Awesome a(2), b(4);

	int i = 21;
	int j = 42;
	swap(i, j);
	std::cout << "i: " << i << " j: " << j << std::endl;
	std::cout << "max: " << max(i, j) << std::endl;
	std::cout << "min: " << min(i, j) << std::endl;
	
	swap(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;
	std::cout << "min: " << min(a, b) << std::endl;
	return (0);
}