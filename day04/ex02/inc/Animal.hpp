#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	private:
		virtual Animal&	operator=(const Animal&){return *this;};
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal& a);
		virtual ~Animal();
		virtual void	makeSound() const = 0;
		std::string		getType() const;
};

#endif