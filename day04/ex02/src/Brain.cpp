#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Start generating 100 ideas" << std::endl;
}

Brain::Brain(const Brain& obj){
	std::cout << "Copyes someone's 100 ideas" << std::endl;
	*this = obj;
}

Brain::~Brain(){
	std::cout << "All ideas is dead (" << std::endl;
}

Brain&	Brain::operator=(const Brain& obj){
	if (this != &obj)
		for (int i = 0; i < 100; i++)
			this->ideas[i]=obj.ideas[i];
	return (*this);
}