#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	
	std::vector<int>vec(0);
	std::srand(time(0));

	Span bigSpan(1000);	
	for (int i = 0; i < 1000; i++)
		vec.push_back(rand() % 2000);
	bigSpan.addNumber(vec.begin(), vec.end());

	std::cout << bigSpan.shortestSpan() << std::endl;
	std::cout << bigSpan.longestSpan() << std::endl;
}