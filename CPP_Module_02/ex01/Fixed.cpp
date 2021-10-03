#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed( const int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = (value << this->_fractions);
}

Fixed::Fixed( const float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)(roundf(value * (1 << this->_fractions)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator=( const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return (this->_value);
}

void	Fixed::setRawBits( int const raw)
{
	this->_value = raw;
}

int	Fixed::toInt( void ) const
{
	return (this->_value >> 8);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (1 << this->_fractions));
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}