#include <iostream>


class Contact {
private:
	int			index;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
public:
	void read_info(void);
	void print_info(void);
	std::string get_trunc_first_name(void);
	std::string get_trunc_last_name(void);
	std::string get_trunc_nickname(void);
};

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

std::string Contact::get_trunc_first_name()
{
	std::string space;
	int len;

	len = 10 - this->firstName.length();
	if (len >= 0)
		return space.append(len, ' ') + this->firstName;
	else
		return this->firstName.substr(0, 9) + ".";
}

std::string Contact::get_trunc_last_name()
{
	std::string space;
	int len;

	len = 10 - this->lastName.length();
	if (len >= 0)
		return space.append(len, ' ') + this->lastName;
	else
		return this->lastName.substr(0, 9) + ".";
}

std::string Contact::get_trunc_nickname()
{
	std::string space;
	int len;

	len = 10 - this->nickname.length();
	if (len >= 0)
		return space.append(len, ' ') + this->nickname;
	else
		return this->nickname.substr(0, 9) + ".";
}

class PhoneBook{
private:
	static const int SIZE = 3;
	Contact contacts[SIZE];
	int		count;
public:
	PhoneBook();

	void add_contact(void);
	void list_contact(void);
	void print_contact(int i);
	void search_contact(void);
	bool is_full();
};

PhoneBook::PhoneBook()
{
	this->count = 0;
}

void	PhoneBook::add_contact()
{
	Contact contact;

	contact.read_info();
	this->contacts[this->count % this->SIZE] = contact;
	this->count++;
}

void PhoneBook::list_contact()
{
	int max;

	if (this->is_full())
		max = this->SIZE;
	else
		max = this->count;
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
	this->contacts[i].print_info();
}

bool PhoneBook::is_full()
{
	return this->count > this->SIZE - 1;
}

int	main()
{
	std::string	str;
	PhoneBook	phone_book;

	while (true)
	{
		std::cout << "ADD / SEARCH / EXIT : ";
		getline(std::cin, str);
		if (str == "EXIT")
			break;
		if (str == "ADD")
			phone_book.add_contact();
		else if (str == "SEARCH")
		{
			phone_book.list_contact();
			phone_book.search_contact();
		}
	}
	std::cout << str << std::endl;
	return (0);
}
