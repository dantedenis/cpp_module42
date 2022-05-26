#ifndef SHRUBBBERYCREATIONFORM_HPP
# define SHRUBBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public virtual Form {
	private:
		static const std::string	BTree[35];
		const std::string			target;
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& form);
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string _target);
		ShrubberyCreationForm(const ShrubberyCreationForm& form);
		~ShrubberyCreationForm();
		void					execute(const Bureaucrat&) const;
};

#endif
