//
// Created by Bridge Strong on 25.04.2022.
//
#include "Span.hpp"

int main(){
	Span sp = Span(-5);
	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &ex){
		std::cout << ex.what() << std::endl;
	}
	return 0;
}