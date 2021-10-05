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
		Fixed( const Fixed& );

		Fixed&	operator= ( const Fixed& );

		bool	operator< ( const Fixed& ) const;
		bool	operator> ( const Fixed& ) const;
		bool	operator<= ( const Fixed& ) const;
		bool	operator>= ( const Fixed& ) const;
		bool	operator== ( const Fixed& ) const;
		bool	operator!= ( const Fixed& ) const;

		Fixed	operator+ ( const Fixed& ) const;
		Fixed	operator- ( const Fixed& ) const;
		Fixed	operator* ( const Fixed& ) const;
		Fixed	operator/ ( const Fixed& ) const;

		Fixed&	operator++ ();
		Fixed&	operator-- ();
		Fixed	operator++ ( int );
		Fixed	operator-- ( int );

		static Fixed &min( Fixed&, Fixed& );
		static Fixed &max( Fixed&, Fixed& );
		static Fixed const &min( Fixed const &, Fixed const & );
		static Fixed const &max( Fixed const &, Fixed const & );
		~Fixed();


};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif
