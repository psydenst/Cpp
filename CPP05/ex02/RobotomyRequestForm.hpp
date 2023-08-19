#ifndef ROBOTOMYCREATIONFORM_HPP
#define ROBOTOMYCREATIONFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &instance);
		~RobotomyRequestForm();
		bool execute(Bureaucrat const &executor) const;
		void beSigned(Bureaucrat const &b);

		RobotomyRequestForm &operator=(RobotomyRequestForm const &right_hand_side);
};
std::ostream &operator << (std::ostream &outputFile, RobotomyRequestForm const &i);

#endif
