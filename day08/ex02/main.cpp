//
// Created by Bridge Strong on 25.04.2022.
//

#include "MutantStack.hpp"

int main(){

	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "MStack top: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "MStack size: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "*" <<*it << std::endl;
			++it;
		}
		std::stack<int>s(mstack);
	}

	MutantStack<int> nums;
	nums.push(2);
	nums.push(15);
	nums.push(12);
	nums.push(123);
	nums.push(453);

	MutantStack<int>::iterator it = nums.begin();
	MutantStack<int>::iterator ite = nums.end();
	for (; it != ite;)
		std::cout << *(--ite) << " ";
	std::cout << std::endl;

	std::stack<int> s(nums);

	while (!s.empty()) {
		std::cout << s.top() << " ";
		s.pop();
	}
	std::cout << std::endl;
}