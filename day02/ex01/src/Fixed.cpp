#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	value_int = 0;
}

Fixed::Fixed(const Fixed& obj){
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->value_int = value * (1 << bits);
}

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	this->value_int = roundf(value * (1 << bits));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" <<std::endl;
}

int	Fixed::getRawBits() const {
	//std::cout << "getRawBits member function called" << std::endl;
	return value_int;
}

void	Fixed::setRawBits(int const raw){
	//std::cout << "setRawBits member function called" << std::endl;
	this->value_int = raw;

}

Fixed &Fixed::operator=(const Fixed &op){
	std::cout << "Copy assigment operator called" <<std::endl;
	if (this != &op)
		this->value_int = op.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj){
	out << obj.toFloat();
	return out;
}

int	Fixed::toInt() const {
	return value_int >> bits;
}

float	Fixed::toFloat() const {
	return (float) value_int / (float)(1 << bits);
}