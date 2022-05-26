//
// Created by Bridge Strong on 24.04.2022.
//

#include "Conversion.h"

int main(int argc, char **argv){
	if (argc == 2){
		Conversion convert(argv[1]);
		std::cout << convert;
	} else {
		std::cout << "Need 1 argument" << std::endl;
	}
	return 0;
}