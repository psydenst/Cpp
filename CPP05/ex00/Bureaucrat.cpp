// INCLUDE 42 HEADER

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade)
{
    std::cout << "Bureaucrat created" << std::endl;
    this->grade = grade;
    try
    {
        if (this->grade < 1)
			throw Bureaucrat::GradeTooLowException();
		else if (this->grade > 150)
			throw Bureaucrat::GradeTooHighException();
    }
 	catch(const GradeTooHighException e)
    {
		std::cerr << e.what() << '\n';
    }
    catch (const GradeTooLowException e)
    {
		std::cerr << e.what() << '\n';
    }
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

void Bureaucrat::incrementGrade()
{
    this->grade++;
    try
    {
        if (this->grade < 1)
			throw Bureaucrat::GradeTooLowException();
		else if (this->grade > 150)
			throw Bureaucrat::GradeTooHighException();
    }
 	catch(const GradeTooHighException e)
    {
		std::cerr << e.what() << '\n';
    }
    catch (const GradeTooLowException e)
    {
		std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::decrementGrade()
{
    try
    {
        if (this->grade < 1)
			throw Bureaucrat::GradeTooLowException();
		else if (this->grade > 150)
			throw Bureaucrat::GradeTooHighException();
    }
 	catch(const GradeTooHighException e)
    {
		std::cerr << e.what() << '\n';
    }
    catch (const GradeTooLowException e)
    {
		std::cerr << e.what() << '\n';
    }
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &right_hand_side)
{
	this->grade = right_hand_side.getGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream &outputFile, Bureaucrat const &i)
{
	outputFile << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return (outputFile);
}

