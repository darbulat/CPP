#include "Contact.h"

Contact::Contact() : index()
{
}

Contact::~Contact()
{
}


void Contact::read_info()
{
	std::cout << "First name: ";
	getline(std::cin, this->firstName);
	std::cout << "Last name: ";
	getline(std::cin, this->lastName);
	std::cout << "Nickname: ";
	getline(std::cin, this->nickname);
	std::cout << "Phone number: ";
	getline(std::cin, this->phoneNumber);
	std::cout << "Darkest secret: ";
	getline(std::cin, this->darkestSecret);
	this->index++;
}

void Contact::print_info()
{
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: "<< this->phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->darkestSecret << std::endl;
}

std::string Contact::get_trunc_first_name() const
{
	std::string space;
	int len;

	len = 10 - this->firstName.length();
	if (len >= 0)
		return space.append(len, ' ') + this->firstName;
	else
		return this->firstName.substr(0, 9) + ".";
}

std::string Contact::get_trunc_last_name() const
{
	std::string space;
	int len;

	len = 10 - this->lastName.length();
	if (len >= 0)
		return space.append(len, ' ') + this->lastName;
	else
		return this->lastName.substr(0, 9) + ".";
}

std::string Contact::get_trunc_nickname() const
{
	std::string space;
	int len;

	len = 10 - this->nickname.length();
	if (len >= 0)
		return space.append(len, ' ') + this->nickname;
	else
		return this->nickname.substr(0, 9) + ".";
}
