#include "Fixed.hpp"

/*
**			Constructors && Destructor
*/

Fixed::Fixed(){
	value_int = 0;
}

Fixed::Fixed(const Fixed& obj){
	*this = obj;
}

Fixed::Fixed(const int value) {
	this->value_int = value * (1 << bits);
}

Fixed::Fixed(const float value){
	this->value_int = roundf(value * (1 << bits));
}

Fixed::~Fixed(){
}

/*
**			Operators overloading
*/

Fixed &Fixed::operator=(const Fixed &r_value){
	if (this != &r_value)
		this->value_int = r_value.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(Fixed r_value){
	r_value.value_int += value_int;
	return r_value;
}

Fixed Fixed::operator-(Fixed r_value){
	r_value.value_int = value_int - r_value.value_int;
	return r_value;
}

Fixed Fixed::operator*(const Fixed &r_value){
	Fixed	temp(this->toFloat() * r_value.toFloat());
	return temp;
}

Fixed Fixed::operator/(const Fixed &r_value){
	if (r_value.toFloat() == 0)
		throw std::runtime_error("Error: Division by zerO");
	Fixed	temp(this->toFloat() / r_value.toFloat());
	return temp;
}

Fixed Fixed::operator++(){
	++this->value_int;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed Fixed::operator--(){
	--this->value_int;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed temp = *this;
	--*this;
	return temp;
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj){
	out << obj.toFloat();
	return out;
}

bool operator>(const Fixed& value1, const Fixed& value2){
	return value1.getRawBits() > value2.getRawBits();
}

bool operator<(const Fixed& value1, const Fixed& value2){
	return value1.getRawBits() < value2.getRawBits();
}

bool operator>=(const Fixed& value1, const Fixed& value2){
	return value1.getRawBits() >= value2.getRawBits();
}

bool operator<=(const Fixed& value1, const Fixed& value2){
	return value1.getRawBits() <= value2.getRawBits();
}

bool operator==(const Fixed& value1, const Fixed& value2){
	return value1.getRawBits() == value2.getRawBits();
}

bool operator!=(const Fixed& value1, const Fixed& value2){
	return value1.getRawBits() != value2.getRawBits();
}

/*
**			Methods
*/

int	Fixed::getRawBits() const {
	return value_int;
}

void	Fixed::setRawBits(int const raw){
	this->value_int = raw;

}

int	Fixed::toInt() const {
	return value_int >> bits;
}

float	Fixed::toFloat() const {
	return (float) value_int / (float)(1 << bits);
}

Fixed&	Fixed::max(Fixed &point1, Fixed &point2){
	return point1 >= point2 ? point1 : point2;
}

const Fixed&	Fixed::max(const Fixed &point1, const Fixed &point2){
	return point1 >= point2 ? point1 : point2;
}

Fixed&	Fixed::min(Fixed &point1, Fixed &point2){
	return point1 <= point2 ? point1 : point2;
}

const Fixed&	Fixed::min(const Fixed &point1, const Fixed &point2){
	return point1 <= point2 ? point1 : point2;
}