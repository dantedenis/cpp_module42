#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	private:
		const std::string	name;
		int					hit;
		int					energy;
		int					damage;
		ClapTrap();
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &obj);
		~ClapTrap();
		ClapTrap&		operator=(const ClapTrap& op);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName() const;
		int				getHit() const;
		int				getEnergy() const;
		unsigned int	getDamage() const;
};

std::ostream&			operator<<(std::ostream& out, const ClapTrap& obj);

#endif