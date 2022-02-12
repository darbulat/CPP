#ifndef CPP_SHRUBBERYCREATIONFORM_H
#define CPP_SHRUBBERYCREATIONFORM_H

#include "Form.h"


class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(const std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm &f);
	ShrubberyCreationForm &operator = ( const ShrubberyCreationForm &f );

	virtual void execute(const Bureaucrat &b) const;

private:
	ShrubberyCreationForm();
	std::string _target;
};


#endif //CPP_SHRUBBERYCREATIONFORM_H
