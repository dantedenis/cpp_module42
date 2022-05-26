#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat(){
	std::cout << "{Bureaucrat} Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade = 150): name(_name), grade(_grade){
	std::cout << "{Bureaucrat} Constructor called" << std::endl;
	if (_grade > 150)
		throw GradeTooLowException();
	if (_grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj): name(obj.getName()), grade(obj.getGrade()){
	std::cout << "{Bureaucrat} Copy constructor called" << std::endl;
}

std::string	Bureaucrat::getName() const {
	return name;
}

int	Bureaucrat::getGrade() const {
	return grade;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &obj){
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return out;
}

void	Bureaucrat::upGrade(int range){
	if (grade - range < 1)
		throw GradeTooHighException();
	else
		grade-=range;
}

void	Bureaucrat::downGrade(int range){
	if (grade + range > 150)
		throw GradeTooLowException();
	else
		grade+=range;
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Exception: Grade too low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Exception: Grade too High";
}