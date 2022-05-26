#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat b("Bob", 150);
		Bureaucrat b1("Bob", 151);
		std::cout << b << std::endl;
		b.upGrade(5);
		std::cout << b << std::endl;
	} catch (std::exception &ex){
		std::cout << ex.what() << std::endl;
	}
}