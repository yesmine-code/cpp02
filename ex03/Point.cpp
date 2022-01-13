#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(){
	this->x = Fixed(0);
	this->y = Fixed(0);
}
Point::~Point(){
	return;
}
Point::Point(Point &pp){
	*this = pp;
}
Point::Point(Fixed const x, Fixed const y){
	this->x = x;
	this->y = y;
}
Point &Point::operator=(Point const &pp){
	this->x = pp.x;
	this->y = pp.y;
	return (*this);
}
Fixed Point::getX(void) const{
	return(this->x);
}

Fixed Point::getY(void) const{
	return(this->y);
}