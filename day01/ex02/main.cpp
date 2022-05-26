#include <iostream>
#include <iomanip>

#define UN_LINE	"\x1b[4m"
#define RED		"\x1b[31m"
#define GREEN	"\x1b[32m"
#define PURPLE	"\x1b[34m"
#define D_COL	"\x1b[0m"

int main(){
	std::string	str("HI THIS IS BRAIN");
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << UN_LINE <<"Value variables" << std::endl << D_COL;
	std::cout << std::left << std::setfill(' ');
	std::cout << std::setw(20) << "Origin string: " << str << std::endl;
	std::cout << std::setw(20) << "stringPTR: " << *stringPTR << std::endl;
	std::cout << std::setw(20) << "string REF: " << stringREF << std::endl << std::endl;

	std::cout << UN_LINE << "Address variables" << std::endl << D_COL;
	std::cout << std::setw(20) << "Origin string: " << &str << std::endl;
	std::cout << std::setw(20) << "stringPTR: " << stringPTR << std::endl;
	std::cout << std::setw(20) << "string REF: " << &stringREF << std::endl;
	return (0);
}