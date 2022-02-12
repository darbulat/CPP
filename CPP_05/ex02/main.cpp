#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main()
{
	{
		Form *f = new ShrubberyCreationForm("Shrubs");
		std::cout << *f << std::endl;
		Bureaucrat bureaucrat("John", 100);
		bureaucrat.signForm(*f);
		bureaucrat.executeForm(*f);
		bureaucrat.decrementGrade(50);
		bureaucrat.executeForm(*f);
		delete f;
	}
	std::cout << "__________________________________------------------____________________________" << std::endl;
	{
		Form *f = new RobotomyRequestForm("Robot");
		std::cout << *f << std::endl;
		Bureaucrat bureaucrat("Paul", 70);
		bureaucrat.signForm(*f);
		bureaucrat.executeForm(*f);
		bureaucrat.incrementGrade(50);
		bureaucrat.executeForm(*f);
		delete f;
	}
	std::cout << "__________________________________------------------____________________________" << std::endl;
	{
		Form *f = new PresidentialPardonForm("President");
		std::cout << *f << std::endl;
		Bureaucrat bureaucrat("Bill", 20);
		bureaucrat.signForm(*f);
		bureaucrat.executeForm(*f);
		bureaucrat.incrementGrade(15);
		bureaucrat.executeForm(*f);
		delete f;
	}
}
