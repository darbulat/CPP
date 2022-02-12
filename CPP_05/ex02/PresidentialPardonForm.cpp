#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
		Form("PresidentialPardonForm", 25, 5),
		_target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &f) : Form()
{
	*this = f;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
	(void)f;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &b) const
{
	if (this->getIsSigned() && this->getExecuteGrade() >= b.getGrade())
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else if (this->getIsSigned())
		throw GradeTooLowException();
	else
		throw FormIsNotSignedException();
}

