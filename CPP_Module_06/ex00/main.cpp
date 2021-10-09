#include "Convert.hpp"

int main( int argc, char **argv )
{
	if (argc < 2)
	{
		std::cout << "Few arguments" << std::endl;
		return (0);
	}
	Convert	conv(argv[1]);
	conv.displayTypes();
	return (0);


}

