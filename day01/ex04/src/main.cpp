#include "File.hpp"

int main(int argc, char **argv) {
	if (argc == 4) {
		File file(argv[1]);
		if (file.outReplace(argv[2], argv[3]))
			std::cout << GREEN << "REPLACE is OK" << std::endl << D_COL;
		else
			std::cout << RED << "ERROR REPLACE" << std::endl << D_COL;
	} else {
		std::cout << RED << "FEW ARGS" << std::endl << D_COL;
	}
}