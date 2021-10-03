#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	_value;
		static const int _fractions = 8;
	public:
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;

		Fixed();
		Fixed( const int );
		Fixed( const float );
		Fixed( const Fixed & );
		Fixed& operator=( const Fixed& );
		~Fixed();


};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif
