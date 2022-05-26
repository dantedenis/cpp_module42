#include "Weapon.hpp"

void	Weapon::setType(std::string newType){
	this->type = newType;
}

const std::string&	Weapon::getType() const{
	return this->type;
}