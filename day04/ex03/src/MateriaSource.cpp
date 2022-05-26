#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "{MateriaSource} Constructor call" << std::endl;
	items = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		items[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& obj) {
	std::cout << "{MateriaSource} Copy constructor call" << std::endl;
	*this = obj;
}

MateriaSource::~MateriaSource(){
	std::cout << "{MateriaSource} Destructor call"  << std::endl;
	delete[] items;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& obj) {
	if (this != &obj){
		if (items)
			delete[] items;
		items = new AMateria*[4];
		for (int i = 0; i < 4; i++)
			if (obj.items[i])
				items[i] = obj.items[i]->clone();
			else
				items[i] = NULL;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* obj) {
	for (int i = 0; i < 4; ++i)
		if (!items[i]){
			std::cout << "{MateriaSource} Take item" << std::endl;
			items[i] = obj;
			return ;
		}
	std::cout << "{MateriaSource} Don't have place for a item" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const& type){
	for (int i = 0; i < 4; i++)
		if (items[i]->getType() == type)
			return items[i]->clone();
	return NULL;
}
