//
// Created by Bridge Strong on 24.04.2022.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *array, std::size_t len, void(*func)(T&)){
	for (std::size_t i = 0; i < len; ++i)
		func(array[i]);
};

template<typename T>
void	print(T t){
	std::cout << t << ' ';
}

template<typename T>
void dec(T &num){
	num++;
}

#endif //EX01_ITER_HPP
