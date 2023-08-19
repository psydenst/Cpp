#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include<cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->setTarget(target);
    std::cout << *this << std::endl;
    return ;
}

void RobotomyRequestForm::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->getGradeToSign())
			throw AForm::GradeTooLowException();
	else
			this->setSign(true); 
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robotomy Form destructor called" << std::endl;
}

bool    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (AForm::execute(executor))
    {
        std::srand((unsigned int)time(NULL));
        if ((rand() % 2) != 0)
            std::cout << "Robotomization Failure" << std::endl;
        else
        {
            std::cout << "ROBOT " << this->getTarget() << "ROBOTOMIZED" << std::endl;
            return (true);
        }
    }
    return (false);
}

std::ostream &operator << (std::ostream &outputFile, RobotomyRequestForm const &i)
{
    outputFile  << i.getName()
                << std::endl
                << "Grade to sign: "
                << std::endl
                << "Grade to execute: "
                << i.getGradeToExecute()
                << std::endl
                << "Target: "
                << i.getTarget()
                << std::endl
                << "Is signed: ";
    
    if (i.getIsSigned())
        outputFile << "Yes." << std::endl;
    else
        outputFile << "No." << std::endl;
    return (outputFile);
}
