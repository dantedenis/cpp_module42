# include "Ice.hpp"

Ice::Ice():AMateria("ice") {
	std::cout << "{Ice} Constructor called" << std::endl;
}


Ice::Ice(const Ice& obj): AMateria() {
	std::cout << "{Ice} Constructor copy called" << std::endl;
	*this = obj;
}

Ice&	Ice::operator=(const Ice& obj) {
	if (this != &obj)
		this->type = obj.getType();
	return (*this);
}

Ice::~Ice(){
	std::cout << "{Ice} Destructor called" << std::endl;
}

AMateria*	Ice::clone() const {
	return (new Ice());
}
