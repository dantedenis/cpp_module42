#include "Dog.hpp"

Dog::Dog() {
	std::cout << "{Class Dog} Default constructor call" << std::endl;
	type = "Dog";
	std::cout << "{Class Cat} ";
	brain = new Brain();
}

Dog::Dog(const Dog& a): Animal(a) {
	std::cout << "{Class Dog} Copy constructor call" << std::endl;
	*this = a;
	std::cout << "{Class Dog} ";
	brain = new Brain();
	brain = a.brain;
}

Dog::~Dog() {
	std::cout << "{Class Dog} Default destructor call" << std::endl;
	std::cout << "{Class Dog} ";
	delete brain;
}

void	Dog::makeSound() const {
	std::cout << "[" << type << "]: wooow" << std::endl;
}