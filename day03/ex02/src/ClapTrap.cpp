#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("unnamed"), hit(10), energy(10), damage(0) {
	std::cout << "Called default constructor [ClapTrap]" << std::endl;
}

ClapTrap::ClapTrap(const std::string _name): name(_name), hit(10), energy(10), damage(0) {
	std::cout << "Called constructor [ClapTrap] for [" << name << "] object" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Called destructor [ClapTrap] for [" << name << "] object" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& op) {
	if (this != &op){
		hit = op.hit;
		energy = op.energy;
		damage = op.damage;
	}
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& obj): name(obj.getName() + "_copy") {
	std::cout << "Called copy constructor [ClapTrap] for [" << obj.getName() << "] object" << std::endl;
	*this = obj;
}

void	ClapTrap::attack(const std::string& target) {
	if (energy > 0 && hit > 0){
	std::cout << "ClapTrap " + name + " attacks " + target + ", causing "
				<< damage << " point of damage!" << std::endl;
	--energy;
	} else if (energy <= 0)
		std::cout << "ClapTrap " + name + " doesn't have energy" << std::endl;
	else
		std::cout << "ClapTrap " + name + " is die! )" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	this->damage += amount;
	if (this->damage < 0)
		this->damage = 0;
	std::cout << "[ClapTrap " << name + "]: My damage up to " << this->damage << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	this->hit += amount;
	if (this->hit < 0)
		this->hit = 0;
	std::cout << "[ClapTrap " << name + "]: I repaired my hit to " << this->hit << std::endl;
}

std::string	ClapTrap::getName() const {
	return name;
}

int	ClapTrap::getHit() const {
	return hit;
}

int	ClapTrap::getEnergy() const {
	return energy;
}

unsigned int	ClapTrap::getDamage() const {
	return damage;
}

std::ostream&	operator<<(std::ostream& out, const ClapTrap& obj){
	out << "{name: \'" << obj.getName() << "\', hit: \'" << obj.getHit()
		<< "\', energy: \'" << obj.getEnergy() << "\', damage: \'" << obj.getDamage()
		<< "\'}";
	return out;
}
