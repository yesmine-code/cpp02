#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed{
private:
	int val;
	const static int bitsNum  = 8;
public:
	Fixed(void); //construteur par défaut
	Fixed(const int val);
	Fixed(const float val);
	~Fixed(void); //destructeur
	Fixed(const Fixed&); //constructor de copie
	Fixed &operator=(const Fixed&); // operator d'affectation
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

};
	std::ostream &	operator<<( std::ostream & os, Fixed const & instance);
	int  ft_pow(int val, int pow);


#endif