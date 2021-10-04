#include "Fixed.hpp"

void test( void)
{
	Fixed c;
	Fixed b( 10.5f);
	Fixed a ( 2 );
	c = a;
	std::cout << "\n-----------------test-----------------\n";
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "a == b " << (a == b) << std::endl;
	std::cout << "a != b " << (a != b) << std::endl;
	std::cout << "a == c " << (a == c) << std::endl;
	std::cout << "a > b " << (a > b) << std::endl;
	std::cout << "a < b " << (a < b) << std::endl;
	std::cout << "a + b " << a + b << std::endl;
	std::cout << "b - a " << b - a << std::endl;
	std::cout << "a * b " << a * b << std::endl;
	std::cout << "b / a " << b / a << std::endl;
	std::cout << "min (a, b) " << Fixed::min(a, b) << std::endl;
	std::cout << "max (a, b) " << Fixed::max(a, b) << std::endl;
}

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}