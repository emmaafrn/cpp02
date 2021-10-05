#include "Fixed.hpp"

Fixed::Fixed(){
	fixedPoint = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed& x){
	this->fixedPoint = x.fixedPoint;
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &x){
	fixedPoint = x.fixedPoint;
	std::cout << "Assignation constructor called\n";
	return (*this);
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return (fixedPoint);
}

void	Fixed::setRawBits(int const raw){
	fixedPoint = raw;
}
