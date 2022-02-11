#include "Bureaucrat.h"

int main()
{
	try
	{
		Bureaucrat *bureaucrat = new Bureaucrat("John", -1);
		std::cout << *bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat *bureaucrat = new Bureaucrat("John", 160);
		std::cout << *bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}



	Bureaucrat bureaucrat("Paul", 90);
	std::cout << bureaucrat << std::endl;
	try
	{
		bureaucrat.decrementGrade(61);
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	bureaucrat.incrementGrade(50);
	std::cout << bureaucrat << std::endl;
	try
	{
		bureaucrat.incrementGrade(40);
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
//	bureaucrat.incrementGrade(40);
//	std::cout << bureaucrat << std::endl;
}
