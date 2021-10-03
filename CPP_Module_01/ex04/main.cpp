#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

std::string	replace(std::string line, std::string from, std::string to)
{
	size_t i = 0;
	size_t pos;

	while (i < line.length())
	{
		pos = line.find(from);
		if (pos != std::string::npos)
		{
			line.erase(pos, from.length());
			line.insert(pos, to);
			i = pos + to.length();		
		}
		i++;
	}
	return (line);
}

int	main(int argc, char **argv)
{

	if (argc < 4)
	{
		std::cout << "Few arguments" << std::endl;
		return (0);
	}
	std::string filename(argv[1]);
	std::string	from(argv[2]);
	std::string to(argv[3]);
	std::string line;
	std::ofstream fout;
	std::ifstream fin;
	fin.open(filename.c_str());
	if (!fin)
	{
		std::cout << "No such file" << std::endl;
		return (0);
	}
	filename += ".replace";
	fout.open(filename.c_str());
	while (std::getline(fin, line))
	{
		line = replace(line, from, to);
		fout << line << std::endl;
	}
	return (0);
}