#ifndef PRESIDENTALPARDONFORM_HPP
#define PRESIDENTALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public Form
{
	private:
		bool isSigned;
		PresidentialPardonForm(void);

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &instance);
		~PresidentialPardonForm();
		bool execute(Bureaucrat const &executor) const;
		PresidentialPardonForm &operator=(PresidentialPardonForm const &right_hand_side);
		void beSigned(Bureaucrat const &b);
		void setSign(bool i);

};

std::ostream &operator << (std::ostream &outputFile, PresidentialPardonForm const &i);

#endif
