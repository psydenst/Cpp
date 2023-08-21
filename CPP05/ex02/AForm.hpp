#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
	protected:
	std::string const name;
	int  const gradeToSign;
	int  const gradeToExecute;
	bool isSigned;
	std::string target;

	public: 
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char * what() const throw()
		{
			return ("Grade too high");
		}
	};

	class GradeTooLowException : public std::exception
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
			return ("AForm not sign :/\n");
		}
	};


	AForm(std::string name, int toSign, int toExecute);
	AForm(AForm const &instance);
	~AForm();
	// GETTERS
	int		getGradeToExecute(void) const;
	int		getGradeToSign(void) const;
	std::string	getName(void) const;
	int		getIsSigned() const;
	std::string	getTarget() const;
	
	// OTHERS
	virtual void	beSigned(Bureaucrat const &b) = 0;
	void		setTarget(std::string target);
	void		setSign(bool i);
	AForm& operator=(AForm const &right_hand_side);
	virtual	bool		execute(Bureaucrat const &executor) const = 0;

};

std::ostream &operator << (std::ostream &outputFile, AForm const &i);

#endif
