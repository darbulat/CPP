#include "Form.h"
#include "ShrubberyCreationForm.h"

int main()
{
	Form *f = new ShrubberyCreationForm("Shrubs");
	std::cout << *f << std::endl;
	Bureaucrat bureaucrat("John", 100);
	bureaucrat.signForm(*f);
	std::cout << *f << std::endl;
	bureaucrat.executeForm(*f);
	bureaucrat.decrementGrade(50);
	bureaucrat.executeForm(*f);
	std::cout << bureaucrat << std::endl;
	bureaucrat.incrementGrade(10);
	delete f;
}
