#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const std::string _name);
		ScavTrap(const ScavTrap &obj);
		~ScavTrap();
		void	guardGate();
		void	attack(const std::string &target);
};

#endif