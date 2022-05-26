#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

# define RED	"\x1b[31m"
# define GREEN	"\x1b[32m"
# define YELLOW "\x1b[33m"
# define PURPLE	"\x1b[34m"
# define BLUE	"\x1b[36m"

# define D_COL	"\x1b[0m"

class Harl {
private:
	void	debug();
	void	info();
	void	warning();
	void	error();
	static std::string	levels[4];
public:
	void complain( std::string level );
};

#endif