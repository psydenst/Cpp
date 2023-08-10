// INCLUDE 42 HEADER

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Form::Form()
{
	std::cout << "Form default constructor called, with default gradeToSign -50 and gradeToExecute -50" << std::endl;
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
    try {
        if (!this->isSigned)
        {
            throw Form::NoSignatureException();
        }

        if (executor.getGrade() > this->getGradeToExecute())
        {
            throw Form::GradeTooLowException();
        }

        // If the form is signed and the executor's grade is acceptable, execute the form
        return true;
	} 
	catch (const Form::NoSignatureException &e) 
	{
        std::cerr << "Exception: " << e.what() << std::endl;
        return false;
    } 
	catch (const Form::GradeTooLowException &e)
	{
        std::cerr << "Exception: " << e.what() << std::endl;
        return false;
    }
	catch (const std::exception &e)
	{
        std::cerr << "Exception: " << e.what() << std::endl;
        return false;
    }
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
	" and gradeToExecute is " << i.getGradeToExecute() << ". Is signed: ";
	if (i.getIsSigned())
			outputFile << "Yes" << std::endl;
	else
			outputFile << "No" << std::endl;
	return (outputFile);
}


void Form::beSigned(Bureaucrat const &b)
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

void	Form::setSign(bool i)
{
	this->isSigned = i;
}
