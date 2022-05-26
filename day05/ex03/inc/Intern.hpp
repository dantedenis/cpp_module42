#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Form;

class Intern {
	private:
		static const std::string	template_name[];
	public:
		Intern();
		Intern(const Intern&);
		~Intern();
		Intern&		operator=(const Intern&);
		Form*		makeForm(std::string name, std::string target);
		Form*		factoryRobot(std::string);
		Form*		factoryShrubbery(std::string);
		Form*		factoryPresident(std::string);
		

		class UnknownForm: public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::string	strToLower(std::string);

#endif