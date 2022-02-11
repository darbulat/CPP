#include "Form.h"

Form::Form() :  _name(""), _isSigned(false), _signGrade(150), _executeGrade(150)
{
}

Form::Form(const std::string name, const int signGrade, const int executeGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (_signGrade > 150 || _executeGrade > 150)
		throw GradeTooLowException();
	if (_signGrade < 1 || _executeGrade < 1)
		throw GradeTooHighException();
}

Form::~Form()
{}

Form::Form(const Form &f) : _name(getName()), _isSigned(false), _signGrade(f.getSignGrade()), _executeGrade(f.getExecuteGrade())
{
	*this = f;
}

Form &Form::operator=(const Form &f)
{
	_isSigned = f.getIsSigned();
	return *this;
}

std::string Form::getName() const
{
	return _name;
}

int Form::getExecuteGrade() const
{
	return _executeGrade;
}

int Form::getSignGrade() const
{
	return _signGrade;
}

bool Form::getIsSigned() const
{
	return _isSigned;
}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= _signGrade)
		_isSigned = true;
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "The grade you set is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "The grade you set is too low";
}

std::ostream	&operator<<( std::ostream &out, const Form &f )
{
	out << f.getName() << " form " << f.getIsSigned() << ".";
	return (out);
}
