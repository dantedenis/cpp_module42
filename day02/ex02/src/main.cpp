#include "Fixed.hpp"

int main(){
	Fixed	a;
	Fixed	const b(Fixed(5.05f) * Fixed(2));

	try {
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "Over " << (a > b) << std::endl;
	}



	catch(std::runtime_error &ex){
		std::cout << "Exception: " << ex.what() << std::endl;
	}
	return 0;
}