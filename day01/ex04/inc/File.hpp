#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <string>
# include <fstream>

# define RED	"\x1b[31m"
# define GREEN	"\x1b[32m"
# define PURPLE	"\x1b[34m"
# define D_COL	"\x1b[0m"

class File {
	private:
		std::string	nameFile;
		File();
	public:
		File(std::string name):nameFile(name){};
		bool	outReplace(std::string target, std::string str);
};

#endif