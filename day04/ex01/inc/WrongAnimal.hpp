#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &a);
		virtual ~WrongAnimal();
		WrongAnimal&	operator=(const WrongAnimal& a);
		void			makeSound() const;
		std::string		getType() const;
};

#endif