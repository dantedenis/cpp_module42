#include "Harl.hpp"

std::string	Harl::levels[] =  {"DEBUG", "INFO", "WARNING", "ERROR"};

void	Harl::debug(){
	std::cout << GREEN << "[ DEBUG ] "  << D_COL << std::endl
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
	<< std::endl << "I really do!" << std::endl << D_COL;
};

void	Harl::info(){
	std::cout << BLUE << "[ INFO ] "  << D_COL << std::endl
	<< "I cannot believe adding extra bacon costs more money." << std::endl
	<< "You didn’t put enough bacon in my burger!" << std::endl
	<< "If you did, I wouldn’t be asking for more!" << std::endl;
};

void	Harl::warning(){
	std::cout << YELLOW << "[ WARNING ] "  << D_COL << std::endl
	<< "I think I deserve to have some extra bacon for free." << std::endl
	<< "I’ve been coming for years whereas you started working here since last month." << std::endl;
};

void	Harl::error(){
	std::cout << RED << "[ ERROR ] " << D_COL << std::endl
	<< "This is unacceptable, I want to speak to the manager now." << std::endl;
};

void Harl::complain(std::string level){
	int	i = 0;
	void	(Harl::*func[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for ( ; i < 4; ++i) {
		if (level == levels[i]) {
			break;
		}
	}
	switch (i){
		case 0: (this->*func[0])();
		case 1: (this->*func[1])();
		case 2: (this->*func[2])();
		case 3: (this->*func[3])(); break;
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}