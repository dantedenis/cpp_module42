#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		Fixed const	x;
		Fixed const	y;
	public:
		Point();
		Point(const Fixed x, const Fixed y);
		~Point(){};
		Point(const Point& point);
		Fixed	getX()const;
		Fixed	getY()const;
		Point	operator-(Point r_value) const;
		Point	operator+(Point r_value) const;
		Point	operator*(Point r_value) const;
		Point	operator/(Point r_value) const;
};

std::ostream	&operator<<(std::ostream &out, const Point &obj);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif