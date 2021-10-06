#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed{
private :
int					fixedPoint;  
static const int	fractionnalPart = 8;
public :
	Fixed();
	Fixed(const Fixed& x);
	Fixed(const int x);
	Fixed(const float x);
Fixed	&operator=(const Fixed &x);
int		getRawBits(void) const;
void	setRawBits(int const raw);
float	toFloat(void) const;
int		toInt(void) const;
	~Fixed();
};

std::ostream &operator<<(std::ostream &lhs, const Fixed &rhs);




#endif