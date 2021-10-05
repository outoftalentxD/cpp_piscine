#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
		Point& operator= ( const Point& );
	
	public:
		Fixed x( void ) const;
		Fixed y( void ) const;
		
		Point( );
		Point( float const x, float const y );

		Point( const Point& );

		~Point( );
		
};


#endif