#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"
class Point{
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	Point(Fixed const x, Fixed const y);
	~Point();
	Point(Point &pp);
	Point &operator=(Point const &pp);
	Fixed getX(void) const;
	Fixed getY(void) const;
};

float sign(Point const p1, Point const p2, Point const p3);
bool bsp( Point const a, Point const b, Point const c, Point const point);


#endif