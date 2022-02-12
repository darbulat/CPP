#ifndef CPP_ROBOTOMYREQUESTFORM_H
#define CPP_ROBOTOMYREQUESTFORM_H

#include "Form.h"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(const std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm &f);
	RobotomyRequestForm &operator = ( const RobotomyRequestForm &f );

	virtual void execute(const Bureaucrat &b) const;

private:
	RobotomyRequestForm();
	std::string _target;
};



#endif //CPP_ROBOTOMYREQUESTFORM_H
