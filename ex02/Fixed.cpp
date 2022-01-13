#include "Fixed.hpp"

Fixed::Fixed(void){
	this->val = 0;
}
Fixed::Fixed(const int val){
	this->val = val << this->bitsNum; //shift 8 = 2 puissance 8
}
Fixed::Fixed(const float val){
	int pow = ft_pow(2, bitsNum); //shift 8 ca marche pas sur les floats donc obligé de multuplier par 2 puissance 8
	this->val = roundf(val * pow);
}
Fixed::~Fixed(void){
}
Fixed::Fixed(const Fixed& cpy){
	*this = cpy;
}
Fixed &Fixed::operator=(const Fixed& f){
	this->val = f.val;
	return *this;
}
int Fixed::getRawBits(void) const{
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

std::ostream &operator<<( std::ostream & os, Fixed const & instance)
{
	os << instance.toFloat();
	return (os);
}
Fixed Fixed::operator * (Fixed const & inst) const
{
	Fixed res(this->toFloat() * inst.toFloat());
	return (res);
}
Fixed	Fixed::operator + (Fixed const & inst) const
{
	Fixed res(this->toFloat() + inst.toFloat());
	return (res);
}
Fixed	Fixed::operator - (Fixed const & inst) const
{
	Fixed res(this->toFloat() - inst.toFloat());
	return (res);
}

Fixed	Fixed::operator / (Fixed const & inst) const
{
	if (inst.toFloat() != 0) {
		Fixed res(this->toFloat() / inst.toFloat());
		return (res);
	}
	else {
		std::cout << "sorry you cannot make a division with 0 " << std::endl;
		return 0;
	}
}

Fixed	&Fixed::operator++(void)
{
	this->val++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	last(*this);

	++(*this);
	return (last);
}

Fixed	&Fixed::operator--(void)
{
	this->val--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	last(*this);

	--(*this);
	return (last);
}

Fixed &Fixed::max(Fixed &inst1, Fixed &inst2){
	if (inst1.toFloat() > inst2.toFloat())
		return inst1;
	return inst2;
}
Fixed &Fixed::min(Fixed &inst1, Fixed &inst2){
	if (inst1.toFloat() < inst2.toFloat())
		return inst1;
	return inst2;
}
Fixed const &Fixed::max(Fixed const &inst1, Fixed const &inst2){
	if (inst1.toFloat() > inst2.toFloat())
		return inst1;
	return inst2;
}
Fixed const &Fixed::min(Fixed const &inst1, Fixed const &inst2){
	if (inst1.toFloat() < inst2.toFloat())
		return inst1;
	return inst2;
}

bool	Fixed::operator>( const Fixed &inst ) const
{
	return (this->val > inst.val);
}

bool	Fixed::operator<( const Fixed &inst ) const
{
	return (inst.val > this->val);
}

bool	Fixed::operator>=( const Fixed &inst ) const
{
	return (this->val >= inst.val);
}

bool	Fixed::operator<=( const Fixed &inst ) const
{
	return (this->val <= inst.val);
}

bool	Fixed::operator==( const Fixed &inst ) const
{
	return (inst.val == this->val);
}

bool	Fixed::operator!=( const Fixed &inst) const
{
	return (inst.val != this->val);
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