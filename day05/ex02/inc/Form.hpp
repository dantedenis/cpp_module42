#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <iomanip>
# include "Bureaucrat.hpp"

# define RED	"\x1b[31m"
# define GREEN	"\x1b[32m"
# define YELLOW "\x1b[33m"
# define PURPLE	"\x1b[34m"
# define BLUE	"\x1b[36m"
# define D_COL	"\x1b[0m"

class Bureaucrat;

class Form {
	protected:
		std::string const	name;
		bool				isSign;
		int const			gradeForSign;
		int const			gradeForExec;
		Form();
		Form(Form const& obj);
		Form&		operator=(Form const&);

	public:
		Form(std::string _name, int gradeS, int gradeE);
		~Form();
		std::string			getName() const;
		bool				getHasSign() const;
		int					getGradeForSign() const;
		int					getGradeForExec() const;
		void				beSigned(const Bureaucrat&);
		virtual void		execute(const Bureaucrat&) const = 0;
		
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const Form& obj);

#endif