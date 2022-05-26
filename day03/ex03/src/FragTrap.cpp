#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string _name): ClapTrap(_name) {
	std::cout << "Called constructor [FragTrap] for [" << name << "] object" << std::endl;
	hit = 100;
	energy = 100;
	damage = 30;
}

FragTrap::FragTrap(): ClapTrap("unnamed") {
	std::cout << "Called default constructor [FragTrap]" << std::endl;
	hit = 100;
	energy = 100;
	damage = 30;
}

FragTrap::FragTrap(const FragTrap &obj): ClapTrap(obj) {
	std::cout << "Called copy constructor [FragTrap] for [" << obj.getName() << "] object" << std::endl;
	*this = obj;
}

FragTrap::~FragTrap() {
	std::cout << "Called destructor [FragTrap] for [" << name << "] object" << std::endl;
}

void	FragTrap::highFiveGuys() const {
	if (hit > 0)
		std::cout << "FragTrap [" << name << "] Give me a friendly high five!!!!" << std::endl;
	else
		std::cout << "FragTrap [" << name << "] is die )" << std::endl;
}
