//
// Created by Bridge Strong on 24.04.2022.
//

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main(){
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	identify(NULL);
	delete ptr;
	return 0;
}

Base* generate(void){
	srand(time(nullptr));
	switch (rand() % 3){
		case 0:
			std::cout << "Generate A type" << std::endl;
			return new A();
		case 1:
			std::cout << "Generate C type" << std::endl;
			return new C();
		default:
			std::cout << "Generate B type" << std::endl;
			return new B();
	}
}
void identify(Base* p){
	Base* check[3] = {dynamic_cast<A*>(p), dynamic_cast<B*>(p), dynamic_cast<C*>(p)};
	for (int i = 0; i < 3; i++){
		if(check[i]){
			switch (i) {
				case 0: std::cout << "This is object A" << std::endl; break;
				case 1: std::cout << "This is object B" << std::endl; break;
				case 2: std::cout << "This is object C" << std::endl; break;
			}
		}
	}
	return;
}
void identify(Base& p){
	try {
		Base &check = dynamic_cast<A&>(p);
		(Base) check;
		std::cout << "This is object A" << std::endl;
	} catch (std::exception ex){}
	try {
		Base &check = dynamic_cast<B&>(p);
		(Base) check;
		std::cout << "This is object B" << std::endl;
	} catch (std::exception ex){}
	try {
		Base &check = dynamic_cast<C&>(p);
		(Base) check;
		std::cout << "This is object C" << std::endl;
	} catch (std::exception ex){}
}