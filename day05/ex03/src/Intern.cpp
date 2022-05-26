# include "Intern.hpp"

const std::string	Intern::template_name[] = {"robotomy request", "shrubbery creation", "presidential pardon"};



Intern::Intern() {
	std::cout  << BLUE << "{Intern} Constructor called" << std::endl << D_COL;
}

Intern::Intern(const Intern& obj) {
	std::cout  << BLUE << "{Intern} Copy constructor called" << std::endl << D_COL;
	*this = obj;
}

Intern::~Intern() {
	std::cout << BLUE << "{Intern} Destructor called" << std::endl << D_COL;
}

Intern&	Intern::operator=(const Intern& obj) {
	if (this != &obj) {
		*this = obj;
	}
	return *this;
}

std::string	strToLower(std::string str){
	std::string temp = str;
	for (int i = 0; i < (int)temp.length(); ++i)
		if (temp[i] >= 'A' && temp[i] <= 'Z')
			temp[i] = temp[i] + 32;
	return temp;
}

Form*	Intern::factoryRobot(std::string target) {
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return new RobotomyRequestForm(target);
}

Form*	Intern::factoryShrubbery(std::string target) {
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return new ShrubberyCreationForm(target);
}

Form*	Intern::factoryPresident(std::string target) {
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return new PresidentialPardonForm(target);
}

Form*	Intern::makeForm(std::string name, std::string target) {
	name = strToLower(name);
	Form* (Intern::*func[])(std::string) = {&Intern::factoryRobot, &Intern::factoryShrubbery, &Intern::factoryPresident};
	int i = 0;
	for (; i < 3; ++i)
		if (name == template_name[i])
			return (this->*func[i])(target);
	throw UnknownForm();
	return nullptr;
}

const char*	Intern::UnknownForm::what() const throw() {
	return "[Exception] Unknown form format";
}