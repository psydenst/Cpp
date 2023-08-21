// INCLUDE 42 HEADER

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

# define PINK                   "\e[0;38;5;199m"
# define RESET                  "\e[0m"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
	std::cout << PINK << "Default PresidentialPardonForm constructor, with grade to sign " << this->getGradeToSign () << " and gradeToExecute " << this->getGradeToExecute() << RESET << std::endl;
	return ;
}

std::string PresidentialPardonForm::getName (void) const
{
	return (this->name);
}

bool    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (AForm::execute(executor))
    {
        std::cout << PINK << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << RESET << std::endl;
        return (true);
    }
    return (true);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << PINK << "Presidential Pardon Form destructor called" << RESET << std::endl;
}

std::ostream &operator<<(std::ostream &outputFile, PresidentialPardonForm const &i)
{
    outputFile  << PINK << i.getName() 
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
        outputFile << "Yes." << RESET << std::endl;
    else
        outputFile << "No." << RESET << std::endl;
    return (outputFile);
}

void PresidentialPardonForm::setSign(bool i)
{
    this->isSigned = i;
}

void	PresidentialPardonForm::validBuro(Bureaucrat const &b)
{
	if (b.getGrade() > this->getGradeToSign())
	{	
		throw AForm::GradeTooLowException();
		return ;
	}
	return ;
}

void PresidentialPardonForm::beSigned(Bureaucrat const &b)
{
	try
	{
		validBuro(b);
		this->isSigned = true;
	}
	catch (GradeTooLowException e)
	{
		std::cout << b.getName() << " didn't signed because: "<< e.what() << std::endl;
	}
	return;
}

