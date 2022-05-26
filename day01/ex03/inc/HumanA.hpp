#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		std::string	name;
		Weapon		&weapon;
	public:
		void	attack();
		HumanA(std::string hum, Weapon &wp): name(hum), weapon(wp){};
};

#endif