#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

# define RED	"\x1b[31m"
# define GREEN	"\x1b[32m"
# define PURPLE	"\x1b[34m"
# define D_COL	"\x1b[0m"

class Weapon {
	private:
		std::string	type;
		Weapon();
	public:
		Weapon(std::string name):type(name){};
		void				setType(std::string newType);
		std::string const&	getType() const;
};

#endif