#include <fstream>
#include "ShrubberyCreationForm.h"


ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
	Form("ShrubberyCreationForm", 145, 137),
	_target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &f) : Form()
{
	*this = f;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
	(void)f;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &b) const
{
	std::ofstream	myfile;
	std::string		fileName = this->_target + "_shrubbery";

	if (this->getIsSigned() && this->getExecuteGrade() >= b.getGrade())
	{
		myfile.open(fileName.c_str(), std::ios::out);
		myfile << "      ,.," << std::endl;
		myfile << "      MMMM_    ,..," << std::endl;
		myfile << "        \"_ \"__\"MMMMM          ,...,," << std::endl;
		myfile << " ,..., __.\" --\"    ,.,     _-\"MMMMMMM" << std::endl;
		myfile << "MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"" << std::endl;
		myfile << " \"\"\"\"\"    \"\" , \\_.   \"_. .\"" << std::endl;
		myfile << "        ,., _\"__ \\__./ .\"" << std::endl;
		myfile << "       MMMMM_\"  \"_    ./" << std::endl;
		myfile << "        ''''      (    )" << std::endl;
		myfile << " ._______________.-'____\"---._." << std::endl;
		myfile << "  \\                          /" << std::endl;
		myfile << "   \\________________________/" << std::endl;
		myfile << "   (_)                    (_)" << std::endl;
		myfile.close();
	}
	else if (this->getIsSigned())
		throw GradeTooLowException();
}
