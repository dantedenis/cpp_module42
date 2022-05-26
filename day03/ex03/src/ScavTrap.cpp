#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string _name): ClapTrap(_name){
	std::cout << "Called constructor [ScavTrap] for [" << getName() << "] object" << std::endl;
	hit = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(): ClapTrap("unnamed"){
	std::cout << "Called default constructor [ScavTrap]" << std::endl;
	hit = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj){
	std::cout << "Called copy constructor [ScavTrap] for [" << obj.getName() << "] object" << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap(){
	std::cout << "Called destructor [ScavTrap] for [" << name << "] object" << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "[" + name +"]: Change GateKeeperMode!!!" << std::endl;
}

void	ScavTrap::attack(const std::string &target){
	if (energy > 0 && hit > 0){
	std::cout << "ScavTrap " + name + " attacks " + target + ", causing "
				<< damage << " point of damage!" << std::endl;
	--energy;
	} else if (energy <= 0)
		std::cout << "ScavTrap " + name + " doesn't have energy" << std::endl;
	else
		std::cout << "ScavTrap " + name + " is die! )" << std::endl;
}
