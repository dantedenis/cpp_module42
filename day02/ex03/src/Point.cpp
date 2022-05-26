# include "Point.hpp"

Point::Point(): x(0), y(0){
	
}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y){
	
}

Point::Point(const Point& point): x(point.getX()), y(point.getY()){
	
}

Fixed	Point::getX()const {
	return this->x;
}

Fixed	Point::getY()const {
	return this->y;
};

Point Point::operator-(Point r_value) const{
	Point temp(this->getX() - r_value.getX(), this->getY() - r_value.getY());
	return temp;
}

Point Point::operator+(Point r_value) const{
	Point temp(this->getX() + r_value.getX(), this->getY() + r_value.getY());
	return temp;
}

Point Point::operator*(Point r_value) const{
	Point temp(this->getX() * r_value.getX(), this->getY() * r_value.getY());
	return temp;
}

Point Point::operator/(Point r_value) const{
	Point temp(this->getX() / r_value.getX(), this->getY() / r_value.getY());
	return temp;
}

std::ostream	&operator<<(std::ostream &out, const Point &obj){
	out << '('<< obj.getX() << ',' << obj.getY() << ')';
	return out;
}