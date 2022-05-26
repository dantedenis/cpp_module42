//
// Created by Bridge Strong on 24.04.2022.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

#include <iostream>

template<typename T>
class Array{
private:
	T*		arrayPtr;
	size_t	arraySize;
public:
	Array();
	virtual ~Array();
	Array(size_t _size);
	Array(Array<T> const&);
	Array<T>& operator=(Array<T> const&);
	T& operator[](size_t index);

	size_t	size() const;
};

class out_of_range : public std::logic_error {
public:
	explicit out_of_range(const std::string &what_arg);
};

out_of_range::out_of_range(const std::string &what_arg) : logic_error(what_arg) {
}

template<typename T>
Array<T>::Array(): arraySize(0), arrayPtr(NULL){
}

template<typename T>
Array<T>::~Array<T>() {
	if (!arrayPtr)
		delete []arrayPtr;
}

template<typename T>
Array<T>::Array(size_t _size): arrayPtr(NULL), arraySize(_size) {
	arrayPtr = new T[arraySize];
}

template<typename T>
Array<T>::Array(Array<T> const&obj) : arraySize(obj.size()){
	*this = obj;
}

template<typename T>
T& Array<T>::operator[](size_t index) {
	if (index >= arraySize || index < 0)
		throw out_of_range("\nIndex [" + std::to_string(index) + "] out of range, size array: " + std::to_string(this->arraySize));
	return arrayPtr[index];
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T> const& obj){
	if (this != &obj) {
		this->arraySize = obj.arraySize;
		if (!this->arrayPtr)
			delete[] this->arrayPtr;
		arrayPtr = new T[this->arraySize]();
		for (size_t i = 0; i < this->arraySize; ++i) {
			this->arrayPtr[i] = obj.arrayPtr[i];
		}
	}
	return *this;
}

template<typename T>
size_t Array<T>::size() const {
	return arraySize;
}


#endif //EX02_ARRAY_HPP
