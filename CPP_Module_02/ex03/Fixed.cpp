#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed( const int value )
{
	this->_value = (value << this->_fractions);
}

Fixed::Fixed( const float value )
{
	this->_value = (int)(roundf(value * (1 << this->_fractions)));
}

Fixed::~Fixed()
{
	
}

Fixed::Fixed( const Fixed& fixed )
{
	*this = fixed;
}

Fixed& Fixed::operator=( const Fixed& fixed )
{
	this->_value = fixed.getRawBits();
	return (*this);
}

bool	Fixed::operator<( const Fixed& fixed ) const
{
	return  this->_value < fixed.getRawBits();
}

bool	Fixed::operator>( const Fixed& fixed ) const
{
	return  this->_value > fixed.getRawBits();
}

bool	Fixed::operator<=( const Fixed& fixed ) const
{
	return  this->_value <= fixed.getRawBits();
}

bool	Fixed::operator>=( const Fixed& fixed ) const
{
	return  this->_value >= fixed.getRawBits();
}

bool	Fixed::operator==( const Fixed& fixed ) const
{
	return  this->_value == fixed.getRawBits();
}

bool	Fixed::operator!=( const Fixed& fixed ) const
{
	return  this->_value != fixed.getRawBits();
}



Fixed	Fixed::operator+( const Fixed& fixed ) const
{
	Fixed	ret(*this);

	ret.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-( const Fixed& fixed ) const
{
	Fixed	ret(*this);
	
	ret.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (ret);
}

Fixed	Fixed::operator*( const Fixed& fixed ) const
{
	Fixed		ret(*this);
	long int	a, b;

	a = this->getRawBits();
	b = fixed.getRawBits();
	ret.setRawBits((a * b) >> _fractions);
	return (ret);
}

Fixed	Fixed::operator/( const Fixed& fixed ) const
{
	Fixed		ret(*this);
	long int	a, b;

	a = this->getRawBits() << _fractions;
	b = fixed.getRawBits();
	ret.setRawBits((int)(a / b));
	return (ret);
}

Fixed&	Fixed::operator++()
{
	this->_value += 1;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	ret(*this);
	
	this->_value += 1;
	return (ret);
}

Fixed&	Fixed::operator--()
{
	this->_value -= 1;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	ret(*this);
	
	this->_value -= 1;
	return (ret);
}

Fixed&	Fixed::min( Fixed& value1, Fixed& value2 )
{
	if (value1 < value2)
		return (value1);
	return (value2);
}

Fixed&	Fixed::max( Fixed& value1, Fixed& value2 )
{
	if (value1 > value2)
		return (value1);
	return (value2);
}

Fixed const & Fixed::min( Fixed const & value1, Fixed const & value2 )
{
	if (value1 < value2)
		return (value1);
	return (value2);
}

Fixed const & Fixed::max( Fixed const & value1, Fixed const & value2 )
{
	if (value1 > value2)
		return (value1);
	return (value2);
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
