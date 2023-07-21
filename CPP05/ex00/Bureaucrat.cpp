// INCLUDE 42 HEADER

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade)
{
    std::cout << "Bureaucrat created" << std::endl;
    this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &instance)
{
    *this = instance;
    std::cout << "Copy Bureaucrat constructor called" << std::endl;
}

Bureaucrat operator = 

void    Bureaucrat::checkGrade(void)
{
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::incrementGrade()
{
    this->grade++;
    try
    {
        checkGrade();
    }
    catch(const std::exception& e)
    {
        this->grade++;
        std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::decrementGrade()
{
    this->grade--;
    if (this->grade < 1)
    {
        checkGrade();
    }
    catch(const std::exception & e)
    {
        this->_grade--;
        std::cerr << e.what() << '\n';
    }
}

