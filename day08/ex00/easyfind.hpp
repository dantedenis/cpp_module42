//
// Created by Bridge Strong on 02.05.2022.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

#include <algorithm>

# define RED	"\x1b[31m"
# define GREEN	"\x1b[32m"
# define YELLOW "\x1b[33m"
# define PURPLE	"\x1b[34m"
# define BLUE	"\x1b[36m"

# define D_COL	"\x1b[0m"



template<typename T>
typename T::iterator easyfind(T &t, int find_num){
	typename T::iterator p =  std::find(t.begin(), t.end(), find_num);
	if (p == t.end()){
		throw std::runtime_error("Number not found(exception)");
	}
	return p;
}

#endif //EX00_EASYFIND_HPP
