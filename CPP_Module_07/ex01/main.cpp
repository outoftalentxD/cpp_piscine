#include "Awesome.hpp"
#include "iter.hpp"

template <typename T>
void multiply(T& x, int multiplier)
{
	x *= multiplier;
}

int main( void )
{

	int size = 5;
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	iter( tab, size, print );
	iter( tab, size, multiply);
	iter( tab2, size, print );
	// iter( tab, size, print );
	return 0;

}