#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap {
	public:
		FragTrap();
		FragTrap(const std::string _name);
		FragTrap(const FragTrap &obj);
		~FragTrap();
		void	highFiveGuys() const;
};

#endif