#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <iomanip>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		std::string const	name;
		bool				isSign;
		int const			gradeForSign;
		int const			gradeForExec;
		Form();
		Form(Form const &obj);
		Form&		operator=(Form const &obj);
	public:
		Form(std::string _name, int gradeS, int gradeE);
		~Form();
		std::string	getName() const;
		bool		getHasSign() const;
		int			getGradeForSign() const;
		int			getGradeForExec() const;
		void		beSigned(const Bureaucrat &obj);
		
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Form &obj);

#endif