#include "Point.hpp"

Point::Point(void): _x(0), _y(0)
{
	//default constructor
}

Point::Point(const float x, const float y): _x(x), _y(y)
{

}
Point::Point(Point const &p): _x(p._x), _y(p._y)
{

}
Point& Point::operator=(const Point &p)
{
	(Fixed)this->_y = p.getX();
	(Fixed)this->_x = p.getY();
	return *this;
}

Fixed Point::getX( void ) const {
	return this->_x;
}

Fixed Point::getY( void ) const {
	return this->_y;
}

Point::~Point(void)
{
	//destructor
}

Fixed crossProduct(Point a, Point b, Point c) {
	return (a.getX() - a.getX()) * \
	(c.getY() - a.getY()) - (b.getY() - a.getY()) \
	* (c.getX() - a.getX());
}
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed cp1, cp2, cp3;

	cp1 = crossProduct(a,b, point);
	cp2 = crossProduct(b, c, point);
	cp3 = crossProduct(c, a, point);
	if (cp1 < 0 && cp2 < 0 && cp3 < 0)
		return (true);
	if (cp1 > 0 && cp2 > 0 && cp3 > 0)
		return (true);
	return (false);
}