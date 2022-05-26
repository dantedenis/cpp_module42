#include "Zombie.hpp"

// Allocate object in stack:

void	Zombie::randomChump(std::string name){
	Zombie temp(name);
	temp.announce();
}