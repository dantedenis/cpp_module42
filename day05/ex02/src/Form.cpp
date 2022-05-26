#include "Form.hpp"

Form::Form(std::string _name, int gradeS, int gradeE): name(_name), gradeForSign(gradeS), gradeForExec(gradeE) {
	std::cout  << BLUE << "{Form} Constructor called" << std::endl << D_COL;
	if (gradeS > 150 || gradeE > 150)
		throw GradeTooLowException();
	if (gradeS < 1 || gradeE < 1)
		throw GradeTooHighException();
	isSign = false;
}

Form::~Form(){
	std::cout << BLUE << "{Form} Destructor called" << std::endl << D_COL;
}

std::string	Form::getName() const{
	return name;
}
bool	Form::getHasSign() const {
	return isSign;
}

int	Form::getGradeForSign() const {
		return gradeForSign;
}

int	Form::getGradeForExec() const {
	return gradeForExec;
}

void	Form::beSigned(const Bureaucrat &man){
	if (man.getGrade() > gradeForSign)
		throw GradeTooLowException();
	isSign = true;
}

std::ostream	&operator<<(std::ostream &out, const Form &obj){
	out << std::endl << std::setw(10) << "__FORM INFO__" << std::endl 
		<< "Name: " << obj.getName() << std::endl
		<< "Signed: " << (obj.getHasSign() ? "yes" : "no") << std::endl
		<< "Grade required to sign: " << obj.getGradeForSign() << std::endl
		<< "Grade required to execute: " << obj.getGradeForExec();
	return out;
}

const char* Form::GradeTooLowException::what() const throw(){
	return "[Exception] Grade too low";
}

const char* Form::GradeTooHighException::what() const throw(){
	return "[Exception] Grade too High";
}
