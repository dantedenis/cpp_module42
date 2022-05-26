#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "{AMateria} Constructor called" << std::endl;
}


AMateria::AMateria(const std::string& _type): type(_type) {
	std::cout << "{AMateria} Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& obj) {
	std::cout << "{AMateria} Copy constructor called" << std::endl;
	*this = obj;
}

AMateria::~AMateria() {
	std::cout << "{AMateria} Destructor called" << std::endl;
}

std::string	const &AMateria::getType() const{
	return type;
}

void	AMateria::use(const ICharacter& target) const {
	if (type == "ice")
		std::cout << "* shouts an ice bolt at " << target.getName() << " *" << std::endl;
	else if (type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}