#include "File.hpp"

bool	File::outReplace(std::string target, std::string str) {
	std::ifstream	in(this->nameFile);
	std::ofstream	out(this->nameFile + ".replace");
	std::string			temp;

	if (in.is_open() && out.is_open()){
		while(std::getline(in, temp)){
			while(1){
				size_t	position = temp.find(target);
				if (position == ULLONG_MAX)
					break;
				temp.erase(position, target.length());
				temp.insert(position, str);
			}
			out << temp << '\n';
		}
		in.close();
		out.close();
	}
	else {
		std::cout << RED << "File is not open" << std::endl << D_COL;
		return false;
	}
	return true;
}