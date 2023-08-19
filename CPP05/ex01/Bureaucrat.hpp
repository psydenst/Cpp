// INCLUDE 42 HEADER

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
    private:
	std::string const name;
	int grade;

	class GradeTooHighException : public std::exception
	{
	    	public:
	        virtual const char * what() const throw()
		{
	            return "Grade too high";
	        }
	};

class GradeTooLowException : public std::exception
{
    public:
        virtual const char * what() const throw()
		{
            return "Grade too low";
        }
};


    public:
        Bureaucrat();
	Bureaucrat(int grade, std::string Name);
	Bureaucrat(Bureaucrat const &instance);
        ~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &right_hand_side); 
        int     		getGrade() const;
		std::string    getName() const;
        void    	incrementGrade();
        void    	decrementGrade();
	void    signForm(Form form) const;
};

#endif
