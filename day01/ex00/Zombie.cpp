#include "Zombie.hpp"

void	Zombie::announce(){
	if (name != "Foo")
		std::cout << '<' << name << ">: BraiiiiiiinnnzzzZ...\n";
	else
		std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

//	Destructor input for debugging

Zombie::~Zombie(){
	std::cout << name << ": is dead!\n";
}