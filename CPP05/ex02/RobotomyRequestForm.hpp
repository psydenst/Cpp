#ifndef ROBOTOMYCREATIONFORM_HPP
#define ROBOTOMYCREATIONFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public Form
{
	private:
		RobotomyRequestForm(void);
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &instance);
		~RobotomyRequestForm();
		bool execute(Bureaucrat const &executor) const;
		RobotomyRequestForm &operator=(RobotomyRequestForm const &right_hand_side);
};
std::ostream &operator << (std::ostream &outputFile, RobotomyRequestForm const &i);

#endif
