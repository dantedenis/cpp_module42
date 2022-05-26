#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("un_type") {
	std::cout << "{Class WrongAnimal} Default constructor call" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& a) {
	std::cout << "{Class WrongAnimal} Copy constructor call" << std::endl;
	*this = a;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "{Class WrongAnimal} Default destructor call" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& a) {
	if (this != &a){
		this->type = a.type;
	}
	return (*this);
}

void	WrongAnimal::makeSound() const {
	std::cout << "[" << type << "]: i don't say" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return this->type;
}