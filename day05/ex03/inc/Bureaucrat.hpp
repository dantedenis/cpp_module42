#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string	name;
		int					grade;
		Bureaucrat(){};

	public:
		~Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &obj);
		std::string		getName() const;
		int				getGrade() const;
		void			upGrade(int range);
		void			downGrade(int range);
		void			signForm(Form& obj);
		void			executeForm(const Form& form);
		
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);

#endif