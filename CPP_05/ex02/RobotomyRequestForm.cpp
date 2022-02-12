#include <cstdlib>
#include "RobotomyRequestForm.h"


RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
		Form("RobotomyRequestForm", 72, 45),
		_target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &f) : Form()
{
	*this = f;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
	(void)f;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &b) const
{
	if (this->getIsSigned() && this->getExecuteGrade() >= b.getGrade())
	{
		std::cout << "some drilling noises!!!!!!!!" << std::endl;
		if (std::rand() % 2)
			std::cout << _target << " has been robotomized successfully!"<< std::endl;
		else
			std::cout << _target << " has not been robotomized =("<< std::endl;
	}
	else if (this->getIsSigned())
		throw GradeTooLowException();
	else
		throw FormIsNotSignedException();
}
