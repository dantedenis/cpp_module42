//
// Created by Bridge Strong on 24.04.2022.
//

#include "Data.h"

Data::Data():str("blab-la"), number(21313123.12313131), str1("top-top"){

}

Data::Data(std::string _str, double _num, std::string _str2):str(_str), number(_num), str1(_str2){

}

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);
}

std::string		Data::getStr() const{
	return str;
};
std::string 	Data::getStr1() const {
	return str1;
};
double			Data::getNumber() const {
	return number;
};

std::ostream& operator<<(std::ostream &out, Data const& obj){
	out << "Str: " << obj.getStr() << std::endl
		<< "Str1: " << obj.getStr1() << std::endl
		<< "Number:" << obj.getNumber() << std::endl;
	return out;
}
