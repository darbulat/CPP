#include "Form.h"

int main()
{
	Form f("Declaration", 100, 100);
	std::cout << f << std::endl;
	Bureaucrat bureaucrat("John", 100);
	bureaucrat.signForm(f);
	std::cout << f << std::endl;
	bureaucrat.incrementGrade(10);
	Form f1("Declaration_1", 100, 100);
	bureaucrat.signForm(f1);
	std::cout << f1 << std::endl;
}
