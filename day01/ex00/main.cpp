#include "Zombie.hpp"

int main(){
	Zombie *temp = Zombie::newZombie("keeeek");
	temp->announce();
	Zombie::randomChump("randoom");
	delete temp;
}