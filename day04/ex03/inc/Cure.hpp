#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: virtual public AMateria {
	public:
		Cure();
		Cure(const Cure &obj);
		~Cure();
		Cure &operator=(const Cure &obj);
		AMateria*	clone() const;
};

#endif