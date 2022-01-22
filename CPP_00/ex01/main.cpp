#include <iostream>
#include "PhoneBook.h"

int	main()
{
	std::string	str;
	PhoneBook	phone_book;

	std::cout << "ADD / SEARCH / EXIT : ";
	while (getline(std::cin, str))
	{
		if (str == "EXIT")
			break;
		if (str == "ADD")
			phone_book.add_contact();
		else if (str == "SEARCH")
		{
			phone_book.list_contact();
			phone_book.search_contact();
		}
		if (!str.empty())
			std::cout << std::endl << "ADD / SEARCH / EXIT : ";
	}
	std::cout << str << std::endl;
	return (0);
}
