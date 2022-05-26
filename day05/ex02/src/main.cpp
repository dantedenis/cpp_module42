#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	try {
		Bureaucrat b("Bob", 10);
		Bureaucrat just("Mike", 75);
		std::cout << b << std::endl;
		ShrubberyCreationForm forma("home");
		ShrubberyCreationForm forma1("tree");
		RobotomyRequestForm	robForm("nik");
		PresidentialPardonForm prForm(b.getName());
		b.upGrade(6);
		b.executeForm(forma);
		b.executeForm(forma1);
		b.executeForm(robForm);
		b.executeForm(prForm);
		just.executeForm(forma1);
		just.executeForm(robForm);
		just.executeForm(prForm);
		std::cout << b << std::endl;
		std::cout << prForm << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what();
	}
}