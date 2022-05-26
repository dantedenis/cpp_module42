#include "Zombie.hpp"

void	Zombie::announce(){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setZombie(int index, std::string name){
	this->index = index;
	this->name = name;
}

//	Destructor input for debugging

Zombie::~Zombie(){
	std::cout << name << index << ": is dead!\n";
}