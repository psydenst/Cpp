#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
    this->setTarget(target);
    std::cout << *this << std::endl;
    return ;
}

void    ShrubberyCreationForm::createFile(void) const
{
    std::string line;
    std::string name = this->getTarget() + "_shrubbery";
    std::ofstream outputFile(name.c_str());
    std::ifstream inputFile("trees.txt");

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