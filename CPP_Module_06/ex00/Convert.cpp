#include "Convert.hpp"

Convert::Convert( char * input ) : _precision(0), _notDefaultType(0)
{
	setType(input);
}

Convert::Convert( const Convert& other )
{
	(void)other;
}

Convert& Convert::operator= ( const Convert& other )
{
	(void)other;
	return (*this);
}

Convert::~Convert( )
{

}

void	Convert::displayChar( void ) const
{
	char	c;

	std::cout << "char: ";
	if (this->_notDefaultType)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	c = static_cast<char>(this->_content);
	if (!std::isprint(c))
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	std::cout << c << std::endl;
}

void	Convert::displayInt( void ) const
{
	std::cout << "int: ";

	if (this->_notDefaultType)
	{
		if (this->_type == "+inf" || this->_type == "-inf")
			std::cout << "integer overflow" << std::endl;
		if (this->_type == "nan" || this->_type == "impossible")
			std::cout << "impossible" << std::endl;
		return ;
	}
	if (this->_content < INT_MIN || this->_content > INT_MAX)
		std::cout << "integer overflow" << std::endl;
	else
		std::cout << static_cast<int>(this->_content) << std::endl;
}

void	Convert::displayFloat( void ) const
{
	std::cout << "float: ";
	if (this->_notDefaultType)
	{
		std::cout << this->_type;
		if (this->_type != "impossible")
			std::cout << "f";
		std::cout << std::endl;
		return ;
	}
	if (this->_content > __FLT_MAX__ || this->_content * -1 > __FLT_MAX__)
		std::cout << "float overflow" << std::endl;
	else
	{
		std::cout << std::fixed << std::setprecision(this->_precision) << static_cast<float>(this->_content);
		if (this->_type == "int" || this->_type == "char")
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}


void	Convert::displayDouble( void ) const
{
	std::cout << "double: ";
	if (this->_notDefaultType)
	{
		std::cout << this->_type << std::endl;
		return ;
	}
	std::cout << std::fixed << std::setprecision(this->_precision) << static_cast<double>(this->_content);
	if (this->_type == "int" || this->_type == "char")
		std::cout << ".0";
	std::cout << std::endl;
}

void	Convert::displayTypes( void ) const
{
	this->displayChar();
	this->displayInt();
	this->displayFloat();
	this->displayDouble();
}


void Convert::setType( char * input )
{
	long long	valueInt;
	double		valueDouble;
	char		*endInt;
	char		*endDouble;

	int len = std::strlen(input);
	if (!strcmp(input, "nan") || !strcmp(input, "+inf") || !strcmp(input, "-inf")
		|| !strcmp(input, "nanf") || !strcmp(input, "+inff") || !strcmp(input, "-inff"))
	{
		if (!strcmp(input, "nanf") || !strcmp(input, "+inff") || !strcmp(input, "-inff"))
			input[len - 1] = 0;
		this->_type = std::string(input);
		this->_notDefaultType = 1;
		return ;
	}


	
	valueInt = std::strtoll(input, &endInt, 10);
	valueDouble = std::strtod(input, &endDouble);
	this->_content = valueDouble;
	if ((*endDouble && *endDouble != 'f') || (*endInt && *endInt != '.'))
	{
		this->_notDefaultType = 1;
		this->_type = "impossible";
		return ;
	}
	if (len < 2 && input[0])
	{
		this->_type = "char";
		return ;
	}
	else if (!*endInt)
	{
		this->_type = "int";
		return ;
	}
	this->_precision = std::strlen(endInt) - 1;
	if (*endDouble == 'f')
	{
		this->_precision--;
		this->_type = "float";
		return ;
	}
	else
	{
		this->_type = "double";
		return ;
	}
	this->_type = "impossible";
	this->_notDefaultType = 1;
}
