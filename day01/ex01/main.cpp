#include "Zombie.hpp"

int main(){
	Zombie *temp = Zombie::zombieHorde(5, "ORDAAAA");
	temp->printAll();
	
	std::cout << '\n';
	
	Zombie *temp2 = Zombie::zombieHorde(6, "NAASRRAAT");
	temp2->printAll();
	
	delete[] temp2;
}