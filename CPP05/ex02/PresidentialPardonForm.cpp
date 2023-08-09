#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
    this->setTarget(target);
    std::cout << *this << std::endl;
    return ;
}

bool    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (Form::execute(executor))
    {
        std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
        return (true);
    }
    return (true);
}

std::ostream &operator<<(std::ostream &outputFile, PresidentialPardonForm const &i)
{
    outputFile  << i.getName() 
                << std::endl   
                << "Grade to sign: "
                << i.getGradeToSign()
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

void PresidentialPardonForm::beSigned(Bureaucrat const b)
{
	if (b.getGrade() > this->getGradeToSign())
			throw Form::GradeTooLowException();
	else
			this->isSigned = true; 
	return;
}