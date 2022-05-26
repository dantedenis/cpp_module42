#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	private:
		AMateria&	operator=(const AMateria&){return *this;};
		AMateria(const AMateria& obj);
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria(const std::string& _type);
		virtual	~AMateria();
		std::string const&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(const ICharacter &target) const;
};

#endif