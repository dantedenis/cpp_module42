#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal*	w_meta = new WrongAnimal();
	const WrongAnimal*		w_cat = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;

	std::cout << std::endl << "Wrong!" << std::endl;
	std::cout << w_meta->getType() << std::endl;
	std::cout << w_cat->getType() << std::endl;
	w_meta->makeSound();
	w_cat->makeSound();
	return (0);
}