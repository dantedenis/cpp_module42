#include "Character.hpp"

Character::Character(): name("unnamed") {
	std::cout << "{Character} Constructor called for " << name << std::endl;
	for (int i = 0; i < 4; ++i)
		slot[i] = NULL;
}

Character::Character(std::string _name): name(_name) {
	std::cout << "{Character} Constructor called for " << name << std::endl;
	for (int i = 0; i < 4; ++i)
		slot[i] = NULL;
}

Character::Character(const Character& obj) {
	std::cout << "{Character} Copy constructor called for " << name << std::endl;
	*this = obj;
}

Character::~Character() {
	std::cout << "{Character} Destructor called for " << name << std::endl;
	for (int i = 0; i < 4; ++i)
		delete slot[i];
}

Character&	Character::operator=(const Character& obj) {
	if (this != &obj){
		for (int i = 0; i < 4; ++i)
			slot[i] = obj.slot[i];
	}
	return (*this);
}

std::string const&	Character::getName() const{
	return name;
}

void	Character::equip(AMateria *m){
	for (int i = 0; i < 4; ++i)
		if (!slot[i]) {
			slot[i] = m->clone();
			return ;
		}
	std::cout << "Don't have slots" << std::endl;
}

void	Character::unequip(int idx){
	if (idx >= 0 && idx < 4 && slot[idx]) {
		delete slot[idx];
		slot[idx] = NULL;
	} else {
		std::cout << "Slot is unavailable" << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target){
	if (idx >= 0 && idx < 4 && slot[idx])
		slot[idx]->use(target);
	else
		std::cout << "Slot is empty" << std::endl;
}