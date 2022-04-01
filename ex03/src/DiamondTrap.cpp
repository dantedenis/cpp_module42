# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string _name): ClapTrap(_name + "_clap_name"){
	std::cout << "Called constructor [DiamondTrap] for [" << name << "] object" << std::endl;
	energy = ScavTrap().getEnergy();
}

DiamondTrap::DiamondTrap(): ClapTrap("Unnamed_clap_name"), name("Unnamed"){
	std::cout << "Called constructor [DiamondTrap] for [" << name << "] object" << std::endl;
}


DiamondTrap::~DiamondTrap(){
	std::cout << "Called destructor [DiamondTrap] for [" << name << "] object" << std::endl;
}

void	DiamondTrap::whoAmI(){
	std::cout << "My ClapTrap's name is " << ClapTrap::name << " and my Diamond's Name is " << name << std::endl;
}
