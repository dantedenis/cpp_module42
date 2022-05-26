//
// Created by Bridge Strong on 24.04.2022.
//

#include "Data.h"

int main(){
	Data data;
	uintptr_t ptr = serialize(&data);
	std::cout << "Serialize: " << ptr << std::endl;
	Data* de_data = deserialize(ptr);
	std::cout << *de_data;
	return (0);
}