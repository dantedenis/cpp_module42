# include "PhoneBook.hpp"

int	checker_arg(std::string str) {
	if (str.length() == 1) {
		if (str[0] >= '0' && str[0] <= '7')
			return str[0] - '0';
	}
	return -1;
}

PhoneBook::PhoneBook(){
	this->count = 0;
}

void	PhoneBook::addContact(){
	Contact	temp;
	if (this->count == 8)
		this->count = 0;
	temp.setIndex(this->count);
	temp.inputSet();
	this->contact[this->count] = temp;
	this->count++;
}

int	PhoneBook::print(std::string index) {
	int	temp = checker_arg(index);
	if (temp != -1) {
		if (!this->contact[temp].empty()) {
			std::cout << std::setw(10) << "ID" << "|";
			std::cout << std::setfill(' ') << std::setw(10) << "First name" << "|";
			std::cout << std::setfill(' ') << std::setw(10) << "Last name" << "|";
			std::cout << std::setfill(' ') << std::setw(10) << "Nickname" << "|\n";
			this->contact[temp].print();
		} else
			std::cout << "Contact is empty\n";
		return (0);
	} else
		std::cout << "\t\t\tError, repeat! (0-7)\n";
	return (1);
}

void	PhoneBook::printAll() {
	std::cout << std::setfill(' ') << std::setw(10) << "ID" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "First name" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "Last name" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "Nickname" << "|\n";
	for (int i = 0; i < 8; ++i)
		this->contact[i].print();
}

void	PhoneBook::start() {
	std::string		buf;
	while (true) {
		std::cout << "Entry cmd: ";
		std::getline(std::cin, buf);
		if ("EXIT" == buf)
			return ;
		else if ("ADD" == buf)
			this->addContact();
		else if ("print all" == buf)
			this->printAll();
		else if ("SEARCH" == buf) {
			while (true) {
				std::cout << "\tEntry ID: ";
				std::getline(std::cin, buf);
				if (!this->print(buf))
					break ;
			}
		}
	}
}