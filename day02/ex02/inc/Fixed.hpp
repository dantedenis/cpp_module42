#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					value_int;
		static int	bits;
	public:
		Fixed();
		Fixed(const Fixed&);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed	&operator=(const Fixed &r_value);
		Fixed	operator+(Fixed r_value);
		Fixed	operator-(Fixed r_value);
		Fixed	operator*(const Fixed &r_value);
		Fixed	operator/(const Fixed &r_value);
		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);
		int		toInt() const;
		float	toFloat() const;
		int		getRawBits() const;
		void	setRawBits(int const raw);
		static Fixed&		max(Fixed &point1, Fixed &point2);
		static const		Fixed&	max(const Fixed &point1, const Fixed &point2);
		static Fixed&		min(Fixed &point1, Fixed &point2);
		static const Fixed&	min(const Fixed &point1, const Fixed &point2);
		bool				operator>(const Fixed& value2) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &obj);

//bool	operator>(const Fixed& value1, const Fixed& value2);
bool	operator<(const Fixed& value1, const Fixed& value2);
bool	operator>=(const Fixed& value1, const Fixed& value2);
bool	operator<=(const Fixed& value1, const Fixed& value2);
bool	operator==(const Fixed& value1, const Fixed& value2);
bool	operator!=(const Fixed& value1, const Fixed& value2);

#endif