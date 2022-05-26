//
// Created by Bridge Strong on 24.04.2022.
//

#include "Conversion.h"

Conversion::Conversion(std::string str): data(str){
	char *temp = NULL;
	numberData = strtod(data.c_str(), &temp);
	access = (!strlen(temp) || (strlen(temp) == 1 && (temp[0] == 'f') && (data[0] != 'f')));
}

Conversion::Conversion(const Conversion &obj) {
	*this = obj;
}

Conversion &Conversion::operator=(const Conversion &obj) {
	this->numberData = obj.numberData;
	this->data = obj.data;
	this->access = obj.access;
	return *this;
}

Conversion::~Conversion() {
}

char Conversion::toChar() const {
	if (!access || std::isnan(numberData) || numberData > 127 || numberData < -128)
		throw ConvertException("impossible");
	char ret = static_cast<char>(numberData);
	if (!isprint(ret))
		throw ConvertException("Non displayable");
	return ret;
}

int Conversion::toInt() const {
	if (!access || std::isnan(numberData) || numberData > INT32_MAX || numberData < INT32_MIN)
		throw ConvertException("impossible");
	return static_cast<int> (numberData);
}

float Conversion::toFloat() const {
	if(!access)
		throw ConvertException("impossible");
	if(std::isnan(numberData))
		throw ConvertException("nanf");
	if(std::isinf(numberData)){
		if (numberData > 0)
			throw ConvertException("+inf");
		else if (numberData < 0)
			throw ConvertException("-inf");
	}
	return static_cast<float>(numberData);
}


double Conversion::toDouble() const {
	if(!access)
		throw ConvertException("impossible");
	if(std::isnan(numberData))
		throw ConvertException("nan");
	if(std::isinf(numberData)){
		if (numberData > 0)
			throw ConvertException("+inf");
		else if (numberData < 0)
			throw ConvertException("-inf");
	}
	return static_cast<double>(numberData);
}

Conversion::ConvertException::ConvertException(const std::string &reason) {
	std::cout << reason << std::endl;
}

std::ostream& operator<<(std::ostream &os, Conversion const &obj){
	try {
		os << "char: " << obj.toChar() << std::endl;
	} catch (std::exception &ex){}
	try {
		os << "int: " << obj.toInt() << std::endl;
	} catch (std::exception &ex){}
	try {
		os << "float: " << std::fixed << std::setprecision(1) << obj.toFloat() << 'f' << std::endl;
	} catch (std::exception &ex){}
	try {
		os << "double: " << obj.toDouble() << std::endl;
	} catch (std::exception &ex){}
	return os;
}