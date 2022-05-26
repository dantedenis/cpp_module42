#include "Cat.hpp"

Cat::Cat() {
	std::cout << "{Class Cat} Default constructor call" << std::endl;
	type = "Cat";
	std::cout << "{Class Cat} ";
	brain = new Brain();
}

Cat::Cat(const Cat& a): Animal(a) {
	std::cout << "{Class Cat} Copy constructor call" << std::endl;
	*this = a;
	std::cout << "{Class Cat} ";
	brain = new Brain();
	brain = a.brain;
}

Cat::~Cat() {
	std::cout << "{Class Cat} Default destructor call" << std::endl;
	std::cout << "{Class Cat} ";
	delete brain;
}

void	Cat::makeSound() const {
	std::cout << "[" << type << "]: meeow" << std::endl;
}