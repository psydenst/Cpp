#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
    this->setTarget(target);
    this->createFile();
    std::cout << "Shrubbery Form constructor called"<< std::endl;
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
        std::cout << name << " ASCII tree created" << std::endl;
    }
    else
        std::cout << "Error creating file" << std::endl;
    outputFile.close();
    inputFile.close();
}

bool    ShrubberyCreationForm::execute (Bureaucrat const &executor) const
{
    if (Form::execute(executor))
    {
        this->createFile();
        return (true);
    }
    return (false);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery Form destructor called" << std::endl;
}

std::ostream &operator << (std::ostream &outputFile, ShrubberyCreationForm const &i)
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

void ShrubberyCreationForm::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->getGradeToSign())
			throw Form::GradeTooLowException();
	else
			this->setSign(true); 
	return;
}