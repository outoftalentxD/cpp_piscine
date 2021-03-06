#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int	_value;
		static const int _fractions = 8;
	public:
		int		getRawBits( void ) const;
		void	setRawBits( int const raw);

		Fixed();
		~Fixed();
		Fixed( const Fixed & );
		Fixed& operator=( const Fixed& );


};

#endif
