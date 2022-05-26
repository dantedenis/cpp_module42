#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat b("Bob", 145);
		std::cout << b << std::endl;
		b.upGrade(5);
		std::cout << b << std::endl;
		Form a("zarplatka", 50, 50);
		std::cout << a << std::endl;
		b.signForm(a);
		std::cout << a << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what();
	}
}