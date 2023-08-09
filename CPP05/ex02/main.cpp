// HEADER 42

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
		int variable;
		std::cout << "Enter a grade: ";
		std::cin >> variable;
		Bureaucrat One(variable);

		Bureaucrat Two(149);
		Two.incrementGrade();
		Two.incrementGrade();

		Bureaucrat Three(2);
		Three.decrementGrade();
		Three.decrementGrade();

		PresidentialPardonForm President("President");
		RobotomyRequestForm Robot("");


}
