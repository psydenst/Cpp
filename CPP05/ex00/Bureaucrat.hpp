// INCLUDE 42 HEADER

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        std::string const name;
        int grade;

    public:
        Bureaucrat();
        Bureaucrat(Bureaucrat const &instance);
        ~Bureaucrat();
        void    checkGrade();
        int     getGrade();
        int     getName();
        void    GradeToHighException();
        void    GradeToLowException();
        void    incrementGrade();
        void    decrementGrade();
};

#endif
