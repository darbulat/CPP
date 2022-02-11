#ifndef CPP_BUREAUCRAT_H
#define CPP_BUREAUCRAT_H

#include <iostream>
#include "Form.h"

class Form;

class Bureaucrat
{
public:
	Bureaucrat(const std::string &name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat &bureaucrat);
	Bureaucrat &operator = ( const Bureaucrat &bureaucrat );

	int			getGrade() const;
	std::string	getName() const;
	void 		incrementGrade(int val);
	void 		decrementGrade(int val);

	void		signForm(Form &f);

private:
	Bureaucrat();
	const std::string	_name;
	int 				_grade;

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

std::ostream	&operator<<( std::ostream &ostream, const Bureaucrat &b );

#endif //CPP_BUREAUCRAT_H
