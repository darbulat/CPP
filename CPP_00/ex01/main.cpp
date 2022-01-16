#include <iostream>

class Contact {
	public:
		int			index;
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
};

class PhoneBook{
	public:
		Contact	contact[7];
		int		lastIndex;
		PhoneBook(){
			lastIndex = 0;
		}
};

void	addContact(PhoneBook *phoneBook)
{
	Contact contact;
	std::string secret;

	std::cout << "First name: ";
	getline(std::cin, contact.firstName);
	std::cout << "Last name: ";
	getline(std::cin, contact.lastName);
	std::cout << "Nickname: ";
	getline(std::cin, contact.nickname);
	std::cout << "Phone number: ";
	getline(std::cin, contact.phoneNumber);
	std::cout << "Darkest secret: ";
	getline(std::cin, secret);
	contact.darkestSecret = secret;
	contact.index = phoneBook->lastIndex + 1;
	phoneBook->contact[0] = contact;
}

int	main()
{
	std::string	str;
	PhoneBook	phoneBook;

	while (true)
	{
		std::cout << "ADD / SEARCH / EXIT : ";
		getline(std::cin, str);
		if (str == "EXIT")
			break;
		if (str == "ADD")
			addContact(&phoneBook);
		std::cout << "First name " << phoneBook.contact[0].firstName << std::endl;
		std::cout << "Phone number "<< phoneBook.contact[0].phoneNumber << std::endl;
		std::cout << "Darkest secret " << phoneBook.contact[0].darkestSecret << std::endl;
	}
	std::cout << str << std::endl;
	return (0);
}
