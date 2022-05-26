#include "Dog.hpp"

Dog::Dog() {
	std::cout << "{Class Dog} Default constructor call" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& a): Animal(a) {
	std::cout << "{Class Dog} Copy constructor call" << std::endl;
	*this = a;
}

Dog::~Dog() {
	std::cout << "{Class Dog} Default destructor call" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "[" << type << "]: wooow" << std::endl;
}