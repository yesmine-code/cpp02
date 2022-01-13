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
	Fixed &operator=(const Fixed &f); // operator d'affectation
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	Fixed operator / (Fixed const & inst) const;
	Fixed operator - (Fixed const & inst) const;
	Fixed operator + (Fixed const & inst) const;
	Fixed operator * (Fixed const & inst) const;
	bool operator > (Fixed const & inst) const;
	bool operator < (Fixed const & inst) const;
	bool operator == (Fixed const & inst) const;
	bool operator >= (Fixed const & inst) const;
	bool operator <= (Fixed const & inst) const;
	bool operator != (Fixed const &inst) const ;
	Fixed &operator --(void);
	Fixed &operator ++ (void);
	Fixed operator --(int);
	Fixed operator ++ (int);
	static Fixed &max(Fixed &inst1, Fixed &inst2);
	static Fixed &min(Fixed &inst1, Fixed &inst2);
	static Fixed const &max(Fixed const &inst1, Fixed const &inst2);
	static Fixed const &min(Fixed const &inst1, Fixed const &inst2);
};
	std::ostream &	operator<<( std::ostream & os, Fixed const & instance);
	int  ft_pow(int val, int pow);


#endif