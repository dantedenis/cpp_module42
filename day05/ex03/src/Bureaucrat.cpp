#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat(){
	std::cout << BLUE << "{Bureaucrat} Destructor called" << std::endl << D_COL;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade = 150): name(_name), grade(_grade){
	std::cout << BLUE << "{Bureaucrat} Constructor called" << std::endl << D_COL;
	if (_grade > 150)
		throw GradeTooLowException();
	if (_grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj): name(obj.getName()), grade(obj.getGrade()){
	std::cout << BLUE << "{Bureaucrat} Copy constructor called" << std::endl << D_COL;
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
		grade -= range;
}

void	Bureaucrat::downGrade(int range){
	if (grade + range > 150)
		throw GradeTooLowException();
	else
		grade += range;
}

void	Bureaucrat::signForm(Form &obj) {
	try {
		obj.beSigned(*this);
		std::cout << GREEN << name << " signed " << obj.getName() << std::endl << D_COL;
	} catch (std::exception &ex) {
		std::cout << RED << name << " couldn't sign " << obj.getName() << " because " << ex.what() << std::endl << D_COL;
	}
}

void	Bureaucrat::executeForm(const Form& form) {
	try {
		form.execute(*this);
		std::cout << GREEN << name << " execute " << form.getName() << std::endl << D_COL;
	} catch (std::exception &ex) {
		std::cout << RED << ex.what() << " - for execute form" << std::endl << D_COL;
	}
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "[Exception] Grade too low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "[Exception] Grade too High";
}