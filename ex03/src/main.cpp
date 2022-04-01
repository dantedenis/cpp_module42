#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(){
	{
		FragTrap fg("Frog");
		std::cout << fg << std::endl;
	}
	DiamondTrap di("Diam");
	di.attack("rap");
	std::cout << di << std::endl;
	di.whoAmI();
}