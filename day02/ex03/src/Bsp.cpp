#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const p){
	float t1 = ((a.getX() - p.getX()) * (b.getY() - a.getY())
				- (b.getX() - a.getX()) * (a.getY() - p.getY())).toFloat();
	float t2 = ((b.getX() - p.getX()) * (c.getY() - b.getY())
				- (c.getX() - b.getX()) * (b.getY() - p.getY())).toFloat();
	float t3 = ((c.getX() - p.getX()) * (a.getY() - c.getY()) - (a.getX()
				- c.getX()) * (c.getY() - p.getY())).toFloat();
	if ((t1 < 0 && t2 < 0 && t3 < 0) || (t1 > 0 && t2 > 0 && t3 > 0)){
		std::cout << "the point " << p << ": :" << a << "," << b << "," << c << std::endl;
		return true;
	}
	if ((t1 == 0 || t2 == 0 || t3 == 0) &&
		(((t1 > 0 && t2 > 0) || (t2 > 0 && t3 > 0) || (t1 > 0 || t3 > 0))
		|| ((t1 < 0 && t2 < 0) || (t2 < 0 && t3 < 0) || (t1 < 0 || t3 < 0)))){
		std::cout << "the point " << p << ": a:" << a << "," << b << "," << c << std::endl;
		return true;
	}
	if ((t1 == 0 && t2 == 0) || (t2 == 0 && t3 == 0) || (t1 == 0 && t3 == 0)){
		std::cout << "the point " << p << ": :" << a << "," << b << "," << c << std::endl;
		return true;
	}
	std::cout << "the point " << p << ": :" << a << "," << b << "," << c << std::endl;
	return false;
}
