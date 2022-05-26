#include "Contact.hpp"

std::string const Contact::info[5] = {
			"first name",
			"last name",
			"nickname",
			"phone",
			"secret"
		};

Contact::Contact() {
	this->is_empty = true;
	this->id = -1;
}

Contact::~Contact(){}

bool	Contact::empty() {
	return this->is_empty;
}

void	Contact::inputSet() {
	std::string value;
	for (int i = 0; i < 5; ++i) {
		std::cout << "Please entry " << Contact::info[i] << ": ";
		std::getline(std::cin, value);
		if (value.length() > 10) {
			value = value.substr(0, 9) + '.';
		} else if (value.length() == 0) {
			return ;
		}
		switch (i) {
			case 0: this->first_name = value; break;
			case 1: this->last_name = value; break;
			case 2: this->nickname = value; break;
			case 3: this->phone = value; break;
			case 4: this->secret = value; break;
		}
	}
	this->is_empty = false;
}

void	Contact::print() {
	if (!this->is_empty)
	{
		std::cout << std::setfill(' ') << std::setw(10) << this->id << "|";
		std::cout << std::setfill(' ') << std::setw(10) << this->first_name << "|";
		std::cout << std::setfill(' ') << std::setw(10) << this->last_name << "|";
		//std::cout << std::setfill(' ') << std::setw(10) << this->phone << "|";
		//std::cout << std::setfill(' ') << std::setw(10) << this->secret << "|";
		std::cout << std::setfill(' ') << std::setw(10) << this->nickname << "|\n";
		return ;
	}
	std::cout << std::setfill(' ') << std::setw(10) << this->id << "|" << "\t(empty contact)\n";
}

Contact& Contact::operator=(Contact &ct) {
	if (this == &ct)
		return (*this);
	this->first_name = ct.first_name;
	this->last_name = ct.last_name;
	this->nickname = ct.nickname;
	this->phone = ct.phone;
	this->secret = ct.secret;
	this->is_empty = ct.is_empty;
	this->id = ct.id;
	return (*this);
}