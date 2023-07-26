// INCLUDE 42 HEADER

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

void Bureaucrat::incrementGrade()
{
    this->grade++;
    try
    {
        if (this->grade < 1)
			throw Bureaucrat::GradeTooLowException();
		if (this->grade > 150)
			throw Bureaucrat::GradeTooHighException();
    }
 	catch(GradeTooHighException e)
    {
		std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::decrementGrade()
{
    this->grade--;
    try
    {
        if (this->grade < 1)
			throw Bureaucrat::GradeTooLowException();
		if (this->grade > 150)
			throw Bureaucrat::GradeTooHighException();
    }
    catch(GradeTooLowException e)
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

void    Bureaucrat::signForm(Form form const)
{
    if (form.gradeToSign == -50)
    {
        try
        {
            form.beSigned(*this);
        }
        catch (GradeTooLowException e)
        {
                std::cerr << this->getName << "couldn't sign "
                << form.getName() << " because" << e.what()
                << std::endl;
        }
    }
	std:: cout << this->getName << " couldn't sign " << form.getName
	<< " because " << e.what() << std::endl;
}
