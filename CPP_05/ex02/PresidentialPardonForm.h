#ifndef CPP_PRESIDENTIALPARDONFORM_H
#define CPP_PRESIDENTIALPARDONFORM_H


#include "Form.h"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(const std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm &f);
	PresidentialPardonForm &operator = ( const PresidentialPardonForm &f );

	virtual void execute(const Bureaucrat &b) const;

private:
	PresidentialPardonForm();
	std::string _target;
};



#endif //CPP_PRESIDENTIALPARDONFORM_H
