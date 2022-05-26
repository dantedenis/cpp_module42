//
// Created by Bridge Strong on 03.05.2022.
//

#ifndef EX00_MUTANTSTACK_HPP
#define EX00_MUTANTSTACK_HPP

#include <deque>
#include <stack>
#include <iostream>

template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container> {
private:
	using std::stack<T, Container>::c;
public:
	typedef typename Container::iterator iterator;
	iterator begin(){return c.begin();}
	iterator end(){return c.end();}
	iterator begin() const {return c.begin();}
	iterator end() const {return c.end();}
};

#endif //EX00_MUTANTSTACK_HPP
