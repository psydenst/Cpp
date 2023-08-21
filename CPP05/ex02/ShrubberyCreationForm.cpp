#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

#define YELLOW "\e[33m"
#define RESET "\e[0m"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->setTarget(target);
    std::cout << YELLOW << "Shrubbery Form constructor called"<< RESET << std::endl;
    return ;
}

void    ShrubberyCreationForm::createFile(void) const
{
    std::string line;
    std::string name = this->getTarget() + "_shrubbery";
    std::ofstream outputFile(name.c_str());
    std::ifstream inputFile("tree.txt");

    if(inputFile && outputFile)
    {
        while (getline(inputFile, line))
            outputFile << line << std::endl;
        std::cout << YELLOW << name << " ASCII tree created" << RESET << std::endl;
    }
    else
        std::cout << "Error creating file" << std::endl;
    outputFile.close();
    inputFile.close();
}

bool    ShrubberyCreationForm::execute (Bureaucrat const &executor) const
{
    if (AForm::execute(executor))
    {
        this->createFile();
        return (true);
    }
    return (false);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << YELLOW << "Shrubbery Form destructor called" << RESET << std::endl;
}

std::ostream &operator << (std::ostream &outputFile, ShrubberyCreationForm const &i)
{
    outputFile  << YELLOW << i.getName()
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
        outputFile << "Yes." << RESET <<std::endl;
    else
        outputFile << "No." << RESET << std::endl;
    return (outputFile);
}

void ShrubberyCreationForm::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->getGradeToSign())
			throw AForm::GradeTooLowException();
	else
			this->setSign(true); 
	return;
}


