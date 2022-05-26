#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
	private:
		std::string name;
		Zombie();
	public:

		//	Static methods

		static Zombie	*newZombie(std::string name);
		static void		randomChump(std::string name);

		//	Constructors and Destructor

		Zombie(std::string name):name(name){};
		~Zombie();

		//	Methods

		void	announce();
};

#endif