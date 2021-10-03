#include "Karen.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Few arguments" << std::endl;
		return 0;
	}
	std::string level(argv[1]);
	Karen karen;

	karen.complain(level);
	return 0;
}