//
// Created by Bridge Strong on 25.04.2022.
//

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include "easyfind.hpp"

int main(){
	std::srand(time(0));

	//	CHECK VECTOR CONTAINER

	std::vector<int> vec;
	vec.reserve(40);
	for (int i = 0; i < 40; i++)
			vec.push_back(rand() % 100);
	try {
		std::vector<int>::iterator it = easyfind(vec, 5);
		std::cout << GREEN << "Number found! " << *it << D_COL << std::endl;
	} catch (std::runtime_error &ex){
		std::cout << RED << ex.what() << D_COL << std::endl;
	}

	//	CHECK DEQUE CONTAINER

	std::deque<int> deq_nums;
	for (int i = 0; i < 40; ++i)
		deq_nums.push_back(rand() % 100);
	try {
		std::deque<int>::iterator it = easyfind(deq_nums, 14);
		std::cout << GREEN << "Number found! " << *it << D_COL << std::endl;
	}catch (std::runtime_error &ex){
		std::cout << RED << ex.what() << D_COL << std::endl;
	}

	//	CHECK LIST CONTAINER

	std::list<int> list_nums;
	for (int i = 0; i < 40; ++i)
		list_nums.push_back(rand() % 100);
	try {
		std::list<int>::iterator it = easyfind(list_nums, 67);
		std::cout << GREEN << "Number found! " << *it << D_COL << std::endl;
	}catch (std::runtime_error &ex){
		std::cout << RED << ex.what() << D_COL << std::endl;
	}
	return 0;
}