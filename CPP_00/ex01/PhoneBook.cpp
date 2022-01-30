#include <iostream>
#include "PhoneBook.h"

PhoneBook::PhoneBook()
{
	this->count = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_contact()
{
	Contact contact;

	contact.read_info();
	this->contacts[this->count % PhoneBook::SIZE] = contact;
	this->count++;
}

void PhoneBook::list_contact() const
{
	int max;

	if (this->is_full())
		max = PhoneBook::SIZE;
	else
		max = this->count;
	std::cout << std::endl << '|' << "     INDEX";
	std::cout << '|' << "FIRST NAME";
	std::cout << '|' << " LAST NAME";
	std::cout << '|' << "  NICKNAME" <<  "|" << std::endl;
	std::cout << "_____________________________________________" << std::endl;
	for (int i = 0; i < max; i++)
	{
		std::cout << '|' << "         " << i;
		std::cout << '|' << this->contacts[i].get_trunc_first_name();
		std::cout << '|' << this->contacts[i].get_trunc_last_name();
		std::cout << '|' << this->contacts[i].get_trunc_nickname() << '|' << std::endl;
	}
}

void PhoneBook::search_contact()
{
	int i;

	std::cout << "Enter Index: ";
	std::cin >> i;
	this->print_contact(i);
}

void PhoneBook::print_contact(int i)
{
	if (i < this->count)
		this->contacts[i].print_info();
}

bool PhoneBook::is_full() const
{
	return this->count > PhoneBook::SIZE - 1;
}
