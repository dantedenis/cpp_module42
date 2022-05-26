#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
	private:
		std::string		name;
		int				index;
		static int		count;
		static Zombie*	_singleton;
		Zombie(){};
		Zombie(std::string name, int index):name(name), index(index){};
	public:
		Zombie(std::string _name):name(_name){};
		~Zombie();
		static Zombie	*zombieHorde(int n, std::string name);
		void			announce();
		void			setZombie(int index, std::string name);
		void			printAll();
};

#endif