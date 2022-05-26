//
// Created by Bridge Strong on 24.04.2022.
//

#ifndef DATA_H
#define DATA_H

#include <iostream>

class Data {
private:
	std::string	str;
	double		number;
	std::string	str1;
	Data& operator=(Data const&);
public:
	Data();
	Data(std::string _str, double _num, std::string _str2);
	~Data(){};
	std::string		getStr() const;
	std::string 	getStr1() const;
	double			getNumber() const;
};

std::ostream& operator<<(std::ostream &out, Data const& obj);
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif // DATA_H
