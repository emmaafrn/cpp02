#include "Fixed.hpp"

// Normal
// 0000 0001 ==> 1

// Fixed point
// 0000 0000
//    ^

// 0001 0000 ==> 1
//    ^

// Normal
// 0000 0101 ==> 5

// Fixed point
// 0101 0000 ==>
//    ^

// Floatant
// **** **** ==> 5.5

// Float -> Int
// Int
// 0000 0101

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	fixedPoint = 0;
}

Fixed::Fixed(const Fixed& x){
	std::cout << "Copy constructor called\n";
	fixedPoint = x.getRawBits();
}

Fixed::Fixed(const int x){
	std::cout << "Int constructor called\n";
	fixedPoint = x << fractionnalPart;
}

Fixed::Fixed(const float x){
	std::cout << "Float constructor called\n";
	fixedPoint = roundf(x * (1 << fractionnalPart));
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &x){
	std::cout << "Assignation operator called\n";
	fixedPoint = x.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &lhs, const Fixed &rhs){
	lhs << rhs.toFloat();
	return (lhs);
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return (fixedPoint);
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called\n";
	fixedPoint = raw;
}

float	Fixed::toFloat(void) const{
	return ((float)fixedPoint / (1 << fractionnalPart));
}

int	Fixed::toInt(void) const{
	return (fixedPoint >> fractionnalPart);
}
