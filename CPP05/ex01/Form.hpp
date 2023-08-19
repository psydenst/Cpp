#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
	private:
	std::string const name;
	int  const gradeToSign;
	int  const gradeToExecute;
	bool isSigned;

	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char * what() const throw()
		{
			return ("Form: grade too high");
		}
	};

	class GradeTooLowException
	{
		public:
		virtual const char * what() const throw()
		{
			return ("Form: grade too low");
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
	Form    &operator=(Form const &right_hand_side);
};

std::ostream &operator << (std::ostream &outputFile, Form const &i);

#endif
