#include "Animal.hpp"

Animal::Animal(): type("unknow type") {
	std::cout << "{Class Animal} Default constructor call" << std::endl;
}

Animal::Animal(const Animal& a) {
	std::cout << "{Class Animal} Copy constructor call" << std::endl;
	*this = a;
}

Animal::~Animal() {
	std::cout << "{Class Animal} Default destructor call" << std::endl;
}

Animal&Animal::operator=(const Animal& a) {
	if (this != &a){
		this->type = a.type;
	}
	return (*this);
}

void	Animal::makeSound() const {
	std::cout << "[" << type << "] : i don't say" << std::endl;
}

std::string	Animal::getType() const {
	return this->type;
}