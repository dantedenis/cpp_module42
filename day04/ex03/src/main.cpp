#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(){
	AMateria *m1 = new Ice();
	AMateria *m2 = new Cure();
	Character ch("bob");
	ch.unequip(5);
	ch.equip(m1);
	ch.equip(m2);
	ch.use(0, ch);
	ch.use(1, ch);
	ch.use(-1, ch);
	MateriaSource ms;
	ms.learnMateria(m1);
	ms.learnMateria(m1);
	ms.learnMateria(m1);
	ms.learnMateria(m1);
	delete m1;
	delete m2;
}