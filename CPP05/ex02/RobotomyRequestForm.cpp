/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:57:04 by psydenst          #+#    #+#             */
/*   Updated: 2023/08/21 19:09:22 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include<cstdlib>

# define V_CYAN                 "\e[0;38;5;44m"
# define RESET                  "\e[0m"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
   	 this->setTarget(target);
    std::cout << V_CYAN << "Default RobotRequestForm constructor called, with gradeToSign" << getGradeToSign() << " and grade to execute " << getGradeToExecute() << RESET << std::endl;
  
	return ;
}

void    RobotomyRequestForm::validBuro(Bureaucrat const &b)
{
        if (b.getGrade() > this->getGradeToSign())
        {
                throw AForm::GradeTooLowException();
                return ;
        }
        return ;
}

void RobotomyRequestForm::beSigned(Bureaucrat const &b)
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




RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << V_CYAN << "Robotomy Form destructor called" << RESET << std::endl;
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
            std::cout << V_CYAN << "ROBOT " << this->getTarget() << " ROBOTOMIZED" << RESET << std::endl;
            return (true);
        }
    }
    return (false);
}

std::ostream &operator << (std::ostream &outputFile, RobotomyRequestForm const &i)
{
    outputFile  << V_CYAN << i.getName()
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
        outputFile << "Yes." << RESET << std::endl;
    else
        outputFile << "No." << RESET << std::endl;
    return (outputFile);
}
