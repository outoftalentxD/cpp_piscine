#include "Point.hpp"

Point::Point( ) : _x(0), _y(0)
{

}

Point::Point( float const x, float const y) : _x(x), _y(y)
{

}

Point::Point(const Point& point) : _x(point._x), _y(point._y)
{

}

Point& Point::operator=( const Point& point)
{
	(void)point;
	std::cout << "Nothing happens here. Cannot change const values" << std::endl;
	return (*this);
}

Fixed	Point::x( void ) const
{
	return (this->_x);
}

Fixed	Point::y( void ) const
{
	return (this->_y);
}

Point::~Point()
{

}




