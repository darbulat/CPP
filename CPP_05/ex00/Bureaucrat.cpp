#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat(Bureaucrat &bureaucrat)
{
	*this = bureaucrat;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	_grade = bureaucrat._grade;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade(int val)
{
	if (_grade - val < 1)
		throw GradeTooHighException();
	_grade -= val;
}

void Bureaucrat::decrementGrade(int val)
{
	if (_grade + val > 150)
		throw GradeTooLowException();
	_grade += val;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "The grade you set is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "The grade you set is too low";
}

std::ostream	&operator<<( std::ostream &out, const Bureaucrat &b )
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (out);
}
