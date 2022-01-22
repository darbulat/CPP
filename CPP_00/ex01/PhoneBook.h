#include "Contact.h"

class PhoneBook{
private:
	static const int SIZE = 3;
	Contact contacts[SIZE];
	int		count;
public:
	PhoneBook();
	virtual ~PhoneBook();
	void add_contact();
	void list_contact() const;
	void print_contact(int i);
	void search_contact();
	bool is_full() const;
};
