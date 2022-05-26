#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter {
	private:
		std::string	name;
		AMateria*	slot[4];
	public:
		Character();
		Character(std::string _name);
		Character(const Character& obj);
		~Character();
		Character&			operator=(const Character &obj);
		std::string const&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif