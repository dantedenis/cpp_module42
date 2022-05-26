//
// Created by Bridge Strong on 02.05.2022.
//

#ifndef EX00_SPAN_HPP
#define EX00_SPAN_HPP

#include <iostream>
#include <set>

class Span {
private:
	const size_t size;
	std::multiset<int> my_set;
	Span& operator=(Span const&);
public:
	Span();
	Span(size_t);
	virtual ~Span();
	Span(Span const &);
	void	addNumber(int);
	int 	shortestSpan() const;
	int 	longestSpan() const;

	class FullSpanException: public std::exception {
		virtual const char* what() const throw();
	};
	class NotEnoughException: public  std::exception {
		virtual const char* what() const throw();
	};
};


#endif //EX00_SPAN_HPP
