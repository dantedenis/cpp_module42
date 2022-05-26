//
// Created by Bridge Strong on 02.05.2022.
//

#include "Span.hpp"

Span::Span(): size(0) {
}

Span::Span(size_t _size):size(_size) {}

Span::~Span() {
	this->my_set.clear();
}

Span::Span(const Span &obj):size(obj.size) {
	this->my_set.clear();
	this->my_set = obj.my_set;
}

void Span::addNumber(int num) {
	if (static_cast<ssize_t>(this->my_set.size()) == this->size)
		throw FullSpanException();
	my_set.insert(num);
}

int Span::longestSpan() const {
	if (my_set.size() <= 1)
		throw NotEnoughException();
	std::multiset<int>::iterator begin = my_set.begin();
	std::multiset<int>::iterator end = my_set.end();
	--end;
	return abs(*end - *begin);
}

int Span::shortestSpan() const {
	if (my_set.size() <= 1)
		throw NotEnoughException();
	std::multiset<int>::iterator iter1 = my_set.begin();
	std::multiset<int>::iterator iter2 = iter1++;
	int result = *iter1 - *iter2;
	while (iter1 != my_set.end()){
		int temp = *iter1 - *iter2;
		if (temp < result)
			result = temp;
		++iter1;
		++iter2;
	}
	return result;
}

const char *Span::FullSpanException::what() const throw() {
	return "Exception(Span): This Span is full!!!";
}

const char *Span::NotEnoughException::what() const throw() {
	return "Exception(Span): No span can be found";
}