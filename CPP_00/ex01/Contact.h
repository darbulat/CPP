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
	Contact();
	virtual ~Contact();
	void read_info();
	void print_info();
	std::string get_trunc_first_name() const;
	std::string get_trunc_last_name() const;
	std::string get_trunc_nickname() const;
};
