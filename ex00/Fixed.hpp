#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{
private :
int					fixedPoint;  
static const int	fractionnalsBytes=8;
public :
	Fixed();
	Fixed(Fixed& x);
Fixed	&operator=(const Fixed &x);
int		getRawBits(void) const;
void	setRawBits(int const raw);
	~Fixed();
};






#endif