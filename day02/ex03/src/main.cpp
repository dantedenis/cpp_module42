#include "Point.hpp"

int main(){
	
	Point a(Fixed(5.f), Fixed(1.f));
	Point b(Fixed(10.f), Fixed(15.f));
	Point c(Fixed(10.f), Fixed(1.f));
	Point point(5.f, 1.f);

	bsp(a, b, c, point);
	bsp(a, b, c, Point(2.23f, 3.34f));
	bsp(a, b, c, Point(15, 6));
	bsp(a, b, c, Point(8.2f, 5.6f));
	return 0;
}