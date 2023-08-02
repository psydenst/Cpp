#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
	private:
	std::string name;
	int  gradeToSign;
	int  gradeToExecute;
	bool isSigned;

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
	public:

	Form();
	Form(int toSign, int toExecute, std::string name);
	Form(Form const &instance);
	~Form();
	// GETTERS
	int 		getGradeToExecute(void) const;
	int			getGradeToSign(void) const;
	std::string getName(void) const;
	int			getIsSigned() const;
	// OTHERS
	int isSign();
	void	beSigned(Bureaucrat b);
	

};

std::ostream &operator << (std::ostream &outputFile, Form const &i);

#endif
