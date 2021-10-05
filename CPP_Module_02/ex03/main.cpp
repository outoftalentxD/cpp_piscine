#include "Point.hpp"

Fixed	sign( Point p1, Point p2, Point p3)
{
	return (p1.x() - p3.x()) * (p2.y() - p3.y()) - (p2.x() - p3.x()) * (p1.y() - p3.y());
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	d1, d2, d3;
	bool	positive, negative;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	positive = (d1 > 0) || (d2 > 0) || (d3 > 0);
	negative = (d1 < 0) || (d2 < 0) || (d3 < 0);

	return (!(positive && negative));
}

int main( void )
{
	std::cout << bsp(Point(0.f, 0.f), Point(5.f, 5.f), Point(0.f, 10.f), Point(1.f, 3.f)) << std::endl;
	std::cout << bsp(Point(0.f, 0.f), Point(5.f, 5.f), Point(0.f, 10.f), Point(1.f, 10.f)) << std::endl;
	std::cout << bsp(Point(0.f, 0.f), Point(5.f, 5.f), Point(0.f, 10.f), Point(5.f, 4.f)) << std::endl;
	std::cout << bsp(Point(0.f, 0.f), Point(5.f, 5.f), Point(0.f, 10.f), Point(4.f, 4.f)) << std::endl;
	std::cout << bsp(Point(0.f, 0.f), Point(5.f, 5.f), Point(0.f, 10.f), Point(-1.f, 10.f)) << std::endl;
	std::cout << bsp(Point(0.f, 0.f), Point(5.f, 5.f), Point(0.f, 10.f), Point(1.f, 1.f)) << std::endl;
	std::cout << bsp(Point(0.f, 0.f), Point(5.f, 5.f), Point(0.f, 10.f), Point(0.f, 0.f)) << std::endl;
}