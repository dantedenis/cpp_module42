#include "ClapTrap.hpp"

int main() {
	ClapTrap	nick("Nick");
	ClapTrap	otherNick(nick);
	nick.takeDamage(15);
	nick.beRepaired(7);
	for(int i = 0; i < 12; ++i)
		nick.attack("ocean");
	std::cout << nick << std::endl;
	std::cout << otherNick << std::endl;
	return 0;
}