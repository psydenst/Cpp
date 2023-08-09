#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
	private:
	std::string name;
	int  gradeToSign;
	int  gradeToExecute;
	bool isSigned;
	std::string target;

	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char * what() const throw()
		{
			return ("Grade too high");
		}
	};

	class GradeTooLowException
	{
		public:
		virtual const char * what() const throw()
		{
			return ("Grade too low");
		}
	};

	class NoSignatureException 
	{
		public:
		virtual const char * what() const throw()
		{
			return ("Form not sign :/\n");
		}
	};
	public:

	Form();
	Form(std::string name, int toSign, int toExecute);
	Form(Form const &instance);
	~Form();
	// GETTERS
	int 		getGradeToExecute(void) const;
	int			getGradeToSign(void) const;
	std::string getName(void) const;
	int			getIsSigned() const;
	std::string getTarget() const;
	bool		execute(Bureaucrat const &executor) const;
	// OTHERS
	virtual void	beSigned(Bureaucrat const b) = 0;
	void		setTarget(std::string target);

};

std::ostream &operator << (std::ostream &outputFile, Form const &i);

#endif
