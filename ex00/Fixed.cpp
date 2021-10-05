#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	fixedPoint = 0;
}

Fixed::Fixed(Fixed& x){
	std::cout << "Copy constructor called\n";
	this->fixedPoint = x.getRawBits();
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &x){
	std::cout << "Assignation operator called\n";
	fixedPoint = x.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return (fixedPoint);
}

void	Fixed::setRawBits(int const raw){
	fixedPoint = raw;
	std::cout << "setRawBits member function called\n";
}
