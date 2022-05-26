#include "Zombie.hpp"

// Allocate object in heap and return it:

Zombie*	Zombie::newZombie(std::string name){
	Zombie	*newZ = new Zombie(name);
	return newZ;
}