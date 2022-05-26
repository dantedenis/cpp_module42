#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
# include <ctime>

class RobotomyRequestForm: public virtual Form {
	private:
		std::string		target;
		RobotomyRequestForm& operator=(const RobotomyRequestForm& form);

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string);
		RobotomyRequestForm(const RobotomyRequestForm& form);
		~RobotomyRequestForm();
		void					execute(const Bureaucrat&) const;
};

# endif