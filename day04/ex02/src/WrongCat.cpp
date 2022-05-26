#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "{Class WrongCat} Default constructor call" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& a): WrongAnimal(a) {
	std::cout << "{Class WrongCat} Copy constructor call" << std::endl;
	*this = a;
}

WrongCat::~WrongCat() {
	std::cout << "{Class WrongCat} Default destructor call" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "[" << type << "]: meeow" << std::endl;
}