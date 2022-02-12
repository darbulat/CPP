#ifndef CPP_INTERN_H
#define CPP_INTERN_H

# include "iostream"

# include "Form.h"
# include "PresidentialPardonForm.h"
# include "RobotomyRequestForm.h"
# include "ShrubberyCreationForm.h"

class Intern
{
public:
	Intern( void );
	~Intern();
	Intern(const Intern &i);
	Intern &operator = ( const Intern &i );
	Form *makeForm(std::string name, std::string target);

private:
	Form *makePresidentialPardonForm(std::string target);
	Form *makeRobotomyRequestForm(std::string target);
	Form *makeShrubberyCreationForm(std::string target);

};

std::ostream &	operator << ( std::ostream &out, Intern const &i);


#endif //CPP_INTERN_H
