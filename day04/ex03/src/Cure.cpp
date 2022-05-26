#include "Cure.hpp"

Cure::Cure():AMateria("cure") {
	std::cout << "{Cure} Constructor called" << std::endl;
}

Cure::~Cure() {
	std::cout << "{Cure} Destructor called" << std::endl;
}

Cure::Cure(const Cure &obj): AMateria() {
	std::cout << "{Cure} Constructor copy called" << std::endl;
	*this = obj;
}

Cure&	Cure::operator=(const Cure& obj) {
	if (this != &obj)
		this->type=obj.getType();
	return (*this);
}

AMateria*	Cure::clone() const {
	return (new Cure());
}
