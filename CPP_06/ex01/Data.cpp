#include "Data.h"

Data::Data()
{
	_int = 0;
	_char = 0;
	_float = 0;
	_double = 0;
	_string = "";
}

Data::Data(int i, char c, float f, double d, std::string s) : _int(i), _char(c), _float(f), _double(d), _string(s)
{}

Data::~Data()
{}

Data::Data(const Data &d)
{
	*this = d;
}

char Data::getChar() const
{
	return _char;
}

int Data::getInt() const
{
	return _int;
}

float Data::getFloat() const
{
	return _float;
}

double Data::getDouble() const
{
	return _double;
}

std::string Data::getString() const
{
	return _string;
}

Data &Data::operator=(const Data &d)
{
	_int = d.getInt();
	_char = d.getChar();
	_float = d.getFloat();
	_double = d.getDouble();
	_string = d.getString();
	return *this;
}

bool Data::operator==(const Data &d)
{
	if (_int == d.getInt() && _char == d.getChar() && _string == d.getString()
			&& _float == d.getFloat() && _double == d.getDouble())
		return true;
	return false;
}
