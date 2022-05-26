#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main() {
	try {
		Bureaucrat b("Bob", 15);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		b.executeForm(*rrf);
		delete rrf;
	} catch (std::exception &ex) {
		std::cout << ex.what();
	}
}