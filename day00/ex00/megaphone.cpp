#include <iostream>

class MyString {
private:
	std::string str;
public:
	MyString(char *str);
	std::string toUpperCase() const;
	std::string get() const;
};

int main(int args, char **argv) {
	if (args > 1)
	{
		for (int i = 1; i < args; ++i) {
			MyString str(argv[i]);
			std::cout << "\033[33m" << str.toUpperCase();
		}
		std::cout << "\033[0m\n";
	} else {
		std::cout << "\033[34m* LOUD AND UNBEARABLE FEEDBACK NOISE *\033[0m\n";
	}
	return (0);
}

MyString::MyString(char *str) {
	this->str = std::string(str);
}

std::string MyString::toUpperCase() const {
	std::string temp = str;
	for (int i = 0; i < (int)temp.length(); ++i)
		if (temp[i] >= 'a' && temp[i] <= 'z')
			temp[i] = temp[i] - 32;
	return temp;
}

std::string MyString::get() const{
	return this->str;
}