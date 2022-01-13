#include "Fixed.hpp"

Fixed::Fixed(void){
	this->val = 0;
	std::cout<<"Default constructor called"<<std::endl;
}
Fixed::~Fixed(void){
	std::cout<<"Destructor called"<<std::endl;
}
Fixed::Fixed(const Fixed& cpy){
	std::cout<<"copy constructor called"<<std::endl;
	*this = cpy;
}
Fixed &Fixed::operator=(const Fixed& f){
	std::cout<<"Assignation operator called"<<std::endl;
	this->val = f.getRawBits();
	return *this;
}
int Fixed::getRawBits(void) const{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (this->val);
}
void Fixed::setRawBits(int const raw){
	this->val = raw;
}