#include "HumanA.hpp"

void	HumanA::attack(){
	std::cout << GREEN << name << " attacks with their " << weapon.getType() << std::endl << D_COL;
}