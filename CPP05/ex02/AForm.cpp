// INCLUDE 42 HEADER

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Form::Form()
{
	std::cout << "Default constructor called, with default gradeToSign -50 and gradeToExecute -50" << std::endl;
	this->gradeToSign = -50;
	this->gradeToExecute = -50;
}

Form::Form(std::string name, int toSign, int toExecute)
{
	this->name = name;
	std::cout << "Default constructor called, with gradeToSign " << toSign
	<< " and gradeToExecute" << toExecute << std::endl;
	this->gradeToSign = toSign;
	this->gradeToExecute = toExecute;
}

bool		Form::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned)
	{
		throw Form::NoSignatureException();
		return false;
	}
	if (executor.getGrade() > this->getGradeToExecute())
	{
		throw Form::GradeTooLowException();
		return false;
	}
	return true;
}


Form::Form(Form const &instance)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

Form::~Form()
{
	std::cout << "Default destructor called" << std::endl;
}

std::string Form::getName() const
{
	return (this->name);
}

int	Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

int Form::getGradeToExecute() const
{
	return(this->gradeToExecute);
}

int	Form::getIsSigned() const
{
	return (this->isSigned);
}

std::ostream &operator <<(std::ostream &outputFile, Form const &i)
{
	outputFile << i.getName() << "gradetoSign is " << i.getGradeToSign() <<
	" and gradeToExecute is" << i.getGradeToExecute() << ". Is signed: ";
	if (i.getIsSigned())
			outputFile << "Yes" << std::endl;
	else
			outputFile << "No" << std::endl;
	return (outputFile);
}


void Form::beSigned(Bureaucrat const b)
{
	if (b.getGrade() > this->getGradeToSign())
			throw Form::GradeTooLowException();
	else
			this->isSigned = true; 
	return;
}

void	Form::setTarget(std::string target)
{
	this->target = target;
}

std::string Form::getTarget() const
{
	return (this->target);
}
