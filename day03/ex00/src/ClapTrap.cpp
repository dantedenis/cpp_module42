#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name) {
	std::cout << "Called constructor for [" << name << "] object" << std::endl;
	hit = 10;
	energy = 10;
	damage = 0;
}

ClapTrap::~ClapTrap(){
	std::cout << "Called destructor for [" << name << "] object" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& op) {
	if (this != &op){
		hit = op.hit;
		energy = op.energy;
		damage = op.damage;
	}
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& obj): name(obj.getName()) {
	std::cout << "Called copy constructor for [" << obj.getName() << "] object" << std::endl;
	*this = obj;
}

void	ClapTrap::attack(const std::string& target) {
	if (energy > 0 && hit > 0) {
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
	std::cout << "[ClapTrap " << name + "]: My damage up to " << damage << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	this->hit += amount;
	if (this->hit < 0)
		this->hit = 0;
	std::cout << "[ClapTrap " << name + "]: I repaired my hit to " << hit << std::endl;
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
	return (out);
}