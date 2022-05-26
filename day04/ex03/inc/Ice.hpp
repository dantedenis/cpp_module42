#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: virtual public AMateria {
	public:
		Ice();
		Ice(const Ice &obj);
		~Ice();
		Ice &operator=(const Ice &obj);
		AMateria*	clone() const;
};

#endif