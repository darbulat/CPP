#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "addresses:" << std::endl;
	std::cout << &str << std::endl;
	std::cout << &(*stringPTR) << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << "values:" << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	str = "GOOD BYE!";
	std::cout << "addresses:" << std::endl;
	std::cout << &str << std::endl;
	std::cout << &(*stringPTR) << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << "values:" << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}