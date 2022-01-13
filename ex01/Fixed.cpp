#include "Fixed.hpp"

Fixed::Fixed(void){
	this->val = 0;
	std::cout<<"Default constructor called"<<std::endl;
}
Fixed::Fixed(const int val){
	this->val = val << this->bitsNum; //shift 8 = 2 puissance 8
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float val){
	int pow = ft_pow(2, bitsNum); //shift 8 ca marche pas sur les floats donc obligé de multuplier par 2 puissance 8
	this->val = roundf(val * pow);
	std::cout << "Float constructor called" << std::endl;
}
Fixed::~Fixed(void){
	std::cout<<"Destructor called"<<std::endl;
}
Fixed::Fixed(const Fixed& cpy){
	std::cout<<"Copy constructor called"<<std::endl;
	*this = cpy;
}
Fixed &Fixed::operator=(const Fixed& f){
	std::cout<<"Assignation operator called"<<std::endl;
	this->val = f.val;
	return *this;
}
int Fixed::getRawBits(void) const{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (this->val);
}
void Fixed::setRawBits(int const raw){
	this->val = raw;
}

int Fixed::toInt(void) const{
	return (this->val >> this->bitsNum);
}

float Fixed::toFloat(void) const{
	int pow = ft_pow(2, bitsNum);
	return ((float)this->val / pow);

}

std::ostream &	operator<<( std::ostream & os, Fixed const & instance)
{
	os << instance.toFloat();
	return (os);
}

int ft_pow(int val, int pow)
{
	int i;
	i = 0;
	int result = 1;
	while (i < pow)
	{
		result =  result * val;
		i++;
	}
	return result;
}