#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
	Point(void);
	~Point(void);
	Point(const float x, const float y);
	Point(Point const &p);
	Point &operator=(const Point &p);
	Fixed getX( void ) const ;
	Fixed getY( void ) const ;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif