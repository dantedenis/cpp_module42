#include <iostream>

class MyString {
private:
	std::string str;
public:
	MyString(char *str);
	std::string toUpperCase();
};

int main(int args, char **argv) {
	if (args > 1)
	{
		for (int i = 1; i < args; ++i) {
			MyString str(argv[i]);
			std::cout << str.toUpperCase();
		}
		std::cout << '\n';
	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
}

MyString::MyString(char *str) {
	this->str = std::string(str);
}

std::string MyString::toUpperCase() {
	for (int i = 0; i < (int)str.length(); ++i)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return this->str;
}
