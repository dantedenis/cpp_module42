#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public virtual Form {
	private:
		std::string		target;
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& form);
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(const PresidentialPardonForm& form);
		~PresidentialPardonForm();
		void					execute(const Bureaucrat&) const;
};

#endif