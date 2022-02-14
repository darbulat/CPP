#include "Converter.h"
#include <stdlib.h>
#include "limits.h"

Converter::Converter()
{
	i = 0;
	c = 0;
	f = 0;
	d = 0;
	type = wrong_;
}

Converter::~Converter()
{}

Converter::Converter(const Converter &c)
{
	*this = c;
}

Converter &Converter::operator=(const Converter &c)
{
	this->i = c.i;
	this->c = c.c;
	this->f = c.f;
	this->d = c.d;
	this->type = c.type;
	return *this;
}

char Converter::getChar()
{
	return c;
}

int Converter::getInt()
{
	return i;
}

double Converter::getDouble()
{
	return d;
}

float Converter::getFloat()
{
	return f;
}

std::string Converter::getType()
{
	if (type == int_)
		return "Integer";
	if (type == float_ || type == nanf_)
		return "Float";
	if (type == double_ || type == nan_)
		return "Double";
	if (type == char_)
		return "Char";
	else
		return "Wrong format";
}

Converter::types Converter::getType(std::string s)
{
	int	i = 0;
	int	dotCount = 0;

	if (s == "")
		return wrong_;
	if (s.length() == 1)
	{
		if (ft_isdigit(s[0]))
			return int_;
		return char_;
	}
	if ((s[0] == '-' || s[0] == '+') && s[1])
		i++;

	if (!s.compare(i, 5, "nan") || !s.compare(i, 5, "inf"))
		return nan_;
	if (!s.compare(i, 5, "nanf") || !s.compare(i, 5, "inff"))
		return nanf_;
	if (s[i] == '.' && (s[i + 1] == 'f' || s[i + 1] == 0))
		return wrong_;
	while (s[i] == '.' || ft_isdigit(s[i]))
	{
		if (s[i] == '.')
			dotCount++;
		if (dotCount > 1)
			return wrong_;
		i++;
	}
	if (!s[i])
	{
		if (dotCount == 1)
			return double_;
		return int_;
	}
	else if (s[i] == 'f' && !s[i + 1] && dotCount == 1)
		return float_;
	return wrong_;
}

void Converter::setType(std::string s)
{
	type = getType(s);
	if (type == wrong_)
		throw WrongFormatException();
}

void Converter::setValues( std::string s )
{
	setType(s);
	if (type == char_)
	{
		c = s[0];
		i = static_cast<long int>(s[0]);
		d = static_cast<double>(i);
		f = static_cast<float>(i);
	}
	else
	{
		c = static_cast<unsigned char>(atoi(s.c_str()));
		i = static_cast<long int>(atoi(s.c_str()));
		d = static_cast<double>(atof(s.c_str()));
		f = static_cast<float>(atof(s.c_str()));
	}
}

void Converter::printValues()
{
	if (type == nan_ || type == nanf_)
		std::cout << "char: impossible" << std::endl;
	else if (d > UCHAR_MAX)
		std::cout << "char: Overflow" << std::endl;
	else if (d < 0)
		std::cout << "char: Underflow" << std::endl;
	else if (i < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;

	if (type == nan_ || type == nanf_)
		std::cout << "int: impossible" << std::endl;
	else if (d > INT_MAX)
		std::cout << "int: Overflow" << std::endl;
	else if (d < INT_MIN)
		std::cout << "int: Underflow" << std::endl;
	else
		std::cout << "int: " << i << std::endl;

	std::cout << "float: " << f << printDotZero(f) << "f" << std::endl;
	std::cout << "double: " << d << printDotZero(d) << std::endl;
}

bool Converter::ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

const std::string Converter::printDotZero( double number )
{
	int tmp;
	tmp = static_cast<int>(number);
	if (tmp > 999999 || tmp < -999999)
		return "";
	if (number - tmp == 0.0)
		return ".0";
	return "";
}

const char *Converter::WrongFormatException::what() const throw()
{
	return "Wrong input format";
}
