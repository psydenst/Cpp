#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		ShrubberyCreationForm(void);
		void	createFile(void) const;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &instance);
		~ShrubberyCreationForm(void);
        bool	execute(Bureaucrat const &executor) const;

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &right_hand_side);
};

std::ostream &operator<<(std::ostream &outputFile, ShrubberyCreationForm const &i);

#endif
