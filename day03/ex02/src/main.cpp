#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	//ClapTrap	nick("Nick");
	///ClapTrap	otherNick(nick);
	//ScavTrap	chel("damn");
	//ScavTrap	chel2("damn2");
	//ScavTrap	copy(chel);
	//nick.takeDamage(15);
	//nick.beRepaired(7);
	//for(int i = 0; i < 12; ++i)
	//	nick.attack("ocean");
	//std::cout << nick << std::endl;
	//std::cout << otherNick << std::endl;
	//chel.attack("WATER");
	//chel.beRepaired(7);
	//chel.guardGate();
	//std::cout << chel << std::endl;
	//std::cout << chel2 << std::endl;
	//std::cout << copy << std::endl;
	FragTrap bib("BIB");
	std::cout << bib << std::endl;
	bib.highFiveGuys();
	bib.attack("BOB");
}