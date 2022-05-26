#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(){
	//{
	//	FragTrap fg("Frog");
	//	std::cout << fg << std::endl;
	//}
	FragTrap fg("Frog");
	DiamondTrap di(fg);
	di.attack(fg.getName());
	std::cout << di << std::endl;
	std::cout << fg << std::endl;
	DiamondTrap di_c(di);
	di.attack("rap");
	//di_c = di;
	std::cout << di_c << std::endl;
	//std::cout << di_c << std::endl;
	DiamondTrap diam("Bax");
	std::cout << diam << std::endl;
	di.whoAmI();
}