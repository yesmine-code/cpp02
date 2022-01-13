#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed{
private:
	int val;
	const static int bitsNum  = 8;
public:
	Fixed(void); //construteur par défaut
	~Fixed(void); //destructeur
	Fixed(const Fixed&); //constructor de copie
	Fixed &operator=(const Fixed&); // operator d'affectation
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif