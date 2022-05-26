#include "Zombie.hpp"

int	Zombie::count = 0;
Zombie*	Zombie::_singleton = NULL;

Zombie*	Zombie::zombieHorde(int n, std::string name){
	if (Zombie::_singleton == NULL){
		_singleton = new Zombie("kek")[n];
		Zombie::count = n;
		for (int i = 0; i < n; i++)
			_singleton[i].setZombie(i, name);
	}
	return _singleton;
}

void	Zombie::printAll(){
	for (int i = 0; i < Zombie::count; i++)
		this[i].announce();
}