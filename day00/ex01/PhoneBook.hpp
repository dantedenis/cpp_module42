#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{
	private:
		Contact	contact[8];
		int		count;
	public:

	// Constructors/ Destructor //

		PhoneBook();

	// Methods //

		void	addContact();
		int		print(std::string str);
		void 	printAll();
		void	start();
};

#endif