#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource {
	private:
		AMateria	**items;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &obj);
		~MateriaSource();
		MateriaSource& operator=(const MateriaSource &obj);
		void		learnMateria(AMateria *);
		AMateria*	createMateria(std::string const &type);
};

#endif