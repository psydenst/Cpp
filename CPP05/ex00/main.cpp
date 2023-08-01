// HEADER 42

#include "Bureaucrat.hpp"
#include "limits.h"
int main()
{
		int variable;
		std::cout << "Enter a grade: ";
		std::cin >> variable;
		Bureaucrat One(variable);

		Bureaucrat Two(INT_MIN);
		Two.incrementGrade();
		Two.incrementGrade();

		Bureaucrat Three(INT_MAX);
		Three.decrementGrade();
		Three.decrementGrade();
}
