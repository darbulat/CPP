#ifndef CPP_FORM_H
#define CPP_FORM_H

#include <iostream>
#include "Bureaucrat.h"

class Bureaucrat;

class Form
{
public:
	Form(const std::string name, const int signGrade, const int executeGrade);
	~Form();
	Form(const Form &f);
	Form &operator = ( const Form &f );
	int getSignGrade() const;
	int getExecuteGrade() const;
	std::string getName() const;
	bool getIsSigned() const;
	void beSigned(const Bureaucrat &b);

private:
	const std::string	_name;
	bool 				_isSigned;
	const int 			_signGrade;
	const int 			_executeGrade;
	Form();

public:
	class GradeTooHighException : public std::exception
	{
	public:
		const char * what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char * what() const throw();
	};
};

std::ostream	&operator<<( std::ostream &ostream, const Form &f );

#endif //CPP_FORM_H
