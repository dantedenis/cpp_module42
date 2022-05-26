#include "Cat.hpp"

Cat::Cat() {
	std::cout << "{Class Cat} Default constructor call" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& a): Animal(a) {
	std::cout << "{Class Cat} Copy constructor call" << std::endl;
	*this = a;
}

Cat::~Cat() {
	std::cout << "{Class Cat} Default destructor call" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "[" << type << "]: meeow" << std::endl;
}