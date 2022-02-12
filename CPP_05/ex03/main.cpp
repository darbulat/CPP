#include "Intern.h"

int main()
{
	Form *f;
	Intern i;
	f = i.makeForm("ShrubberyCreationForm", "Shrub");
	delete f;
	f = i.makeForm("Shrubbery", "Shrub");
	delete f;
	f = i.makeForm("PresidentialPardonForm", "Bill");
	delete f;
}
