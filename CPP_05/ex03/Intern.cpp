#include "Intern.h"

Intern::Intern()
{}

Intern::~Intern()
{}

Intern::Intern(const Intern &i)
{
	*this = i;
}

Intern &Intern::operator=(const Intern &i)
{
	(void)i;
	return *this;
}

Form *Intern::makeForm(std::string name, std::string target)
{
	Form *f = NULL;
	Form *(Intern::*funcs[3])(std::string target) = {
			&Intern::makeShrubberyCreationForm,
			&Intern::makeRobotomyRequestForm,
			&Intern::makePresidentialPardonForm
	};
	std::string types[3] = {
			"ShrubberyCreationForm",
			"RobotomyRequestForm",
			"PresidentialPardonForm"
	};
	for (int i = 0; i < 3; i++)
		if (types[i] == name)
			f = (this->*funcs[i])(target);
	if (f)
		std::cout << "Intern creates " << *f << std::endl;
	else
		std::cout << "Intern cannot create form with name " << name << std::endl;
	return f;
}

Form *Intern::makePresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::makeShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

std::ostream &operator<<( std::ostream &out, Intern const &i)
{
	(void)i;
	out << "Intern";
	return out;
}
