#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					value_int;
		const static int	bits = 8;
	public:
		Fixed();
		Fixed(const Fixed&);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed &operator=(const Fixed &op);
		int		toInt() const;
		float	toFloat() const;
		int		getRawBits() const;
		void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif