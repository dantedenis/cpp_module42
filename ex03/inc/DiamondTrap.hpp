#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string	name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string _name);
		~DiamondTrap();
		using	 ScavTrap::attack;
		void	whoAmI();
};

#endif