#include "Point.hpp"
#include <iostream>

int main( void ) {
	Point p1(12.3, 4.2);
	Point p2(1.0, 4.0);
	Point p3(6.7, 8.1);

	Point point(5.0, 5.0);
	Point bad(0,0);
	std::cout << bsp(p1, p2, p3, point) << std::endl;
	std::cout << bsp(p1, p2, p3, bad) << std::endl;
}