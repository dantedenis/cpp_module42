#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), target("SomeTarget") {
	std::cout << BLUE << "{RobotomyRequestForm} Constructor default call" << std::endl << D_COL;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target): Form("RobotomyRequestForm", 72, 45), target(_target) {
	std::cout << BLUE << "{RobotomyRequestForm} Constructor default call for target: " 
				<< target << std::endl << D_COL;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& form):
				Form(form.name, 72, 45), target(form.target) {
	std::cout << BLUE << "{RobotomyRequestForm} Copy constructor call for target" << std::endl << D_COL;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << BLUE << "{RobotomyRequestForm} Destructor call" << std::endl << D_COL;
}

void	RobotomyRequestForm::execute(const Bureaucrat& obj) const {
	if (obj.getGrade() > gradeForExec)
		throw GradeTooLowException();
	std::srand(std::time(nullptr));
	std::cout << GREEN << "DRRrrrRrRr-rrRrrrrrr-rrrRR-IIii-L" << std::endl << D_COL;
	if (std::rand() % 2)
		std::cout << GREEN << "Robotomy is success" << std::endl << D_COL;
	else
		std::cout << RED << "Robotomy is failed" << std::endl << D_COL;
}