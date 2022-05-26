//
// Created by Bridge Strong on 24.04.2022.
//

#ifndef CONVERSION_H
#define CONVERSION_H

#include <iostream>
#include <cmath>
#include <cfloat>
#include <iomanip>

class Conversion {
private:
	std::string		data;
	long double		numberData;
	bool			access;
	Conversion();

public:
	Conversion(std::string);
	Conversion(Conversion const &);
	~Conversion();
	Conversion& operator=(Conversion const&);
	char toChar() const;
	int toInt() const;
	float toFloat() const;
	double toDouble() const;
	class ConvertException: public std::exception {
	public:
		ConvertException(std::string const&);
	};
};

std::ostream& operator<<(std::ostream &os, Conversion const &);

#endif //CONVERSION_H
