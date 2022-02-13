#include <iostream>
#include <climits>
#include <stdlib.h>
#include <errno.h>

#include "Converter.h"

enum STR2INT_ERROR { SUCCESS, OVERFLOW, UNDERFLOW, INCONVERTIBLE };

STR2INT_ERROR str2int (int &i, char const *s, int base = 10)
{
	char *end;
	long  l;
	errno = 0;
	l = strtol(s, &end, base);
	if ((errno == ERANGE && l == LONG_MAX) || l > INT_MAX) {
		return OVERFLOW;
	}
	if ((errno == ERANGE && l == LONG_MIN) || l < INT_MIN) {
		return UNDERFLOW;
	}
	if (*s == '\0' || *end != '\0') {
		return INCONVERTIBLE;
	}
	i = l;
	return SUCCESS;
}

int main(int argc, char **argv)
{
	int i = -1;
	(void)argc;
	(void)argv;
	char s[] = "1337.0";
	STR2INT_ERROR status;

	status = str2int(i, s);
	if (status == SUCCESS)
		std::cout << "Success " << i << std::endl;
	else
		std::cout << "Fail " << i << std::endl;

	Converter converter;
	std::cout << converter.getDouble() << std::endl;
	std::cout << converter.getType("adsf") << std::endl;
}
