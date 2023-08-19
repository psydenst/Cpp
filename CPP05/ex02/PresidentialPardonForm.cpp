// INCLUDE 42 HEADER

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->setTarget(target);
    std::cout << *this << std::endl;
    return ;
}

bool    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (AForm::execute(executor))
    {
        std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
        return (true);
    }
    return (true);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Presidential Pardon Form destructor called" << std::endl;
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

void PresidentialPardonForm::setSign(bool i)
{
    this->isSigned = i;
}


void PresidentialPardonForm::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->getGradeToSign())
			throw AForm::GradeTooLowException();
	else
			this->setSign(true); 
	return;
}

