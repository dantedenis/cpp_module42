#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int					fixed;
		const static int	bits = 8;
	public:
		Fixed();
		Fixed(const Fixed&);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
		Fixed &operator=(const Fixed &op);
};

#endif