#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5), target("SomeTarget") {
	std::cout << BLUE << "{PresidentialPardonForm} Constructor default call" << std::endl << D_COL;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target): Form("PresidentialPardonForm", 25, 5), target(_target) {
	std::cout << BLUE << "{PresidentialPardonForm} Constructor default call for target: " 
				<< target << std::endl << D_COL;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form):
				Form(form.name, 25, 5), target(form.target) {
	std::cout << BLUE << "{PresidentialPardonForm} Copy constructor call for target" << std::endl << D_COL;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << BLUE << "{PresidentialPardonForm} Destructor call" << std::endl << D_COL;
}

void	PresidentialPardonForm::execute(const Bureaucrat& obj) const {
	if (obj.getGrade() > gradeForExec)
			throw GradeTooLowException();
	std::cout << PURPLE << "ATTENTION: " << target << " has been pardoned by Zaphod Beeblebrox." << std::endl << D_COL;
}
