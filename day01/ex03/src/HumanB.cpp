#include "HumanB.hpp"

void	HumanB::attack(){
	if (weapon == NULL)
		std::cout << RED << name << ": i haven't weapon for attack" << std::endl << D_COL;
	else
		std::cout << GREEN << name << " attacks with their " << weapon->getType() << std::endl << D_COL;
}

void	HumanB::setWeapon(Weapon &wp){
	weapon = &(wp);
}

void	HumanB::putWeapon(){
	weapon = NULL;
}