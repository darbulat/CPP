#include "Converter.h"

Converter::Converter()
{
	i = 0;
	c = 0;
	f = 0;
	d = 0;
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

Converter::types Converter::getType(std::string s)
{
	(void)s;
	return double_;
}

void Converter::setValues()
{

}

void Converter::printValues()
{
	std::cout << c << std::endl;
	std::cout << i << std::endl;
	std::cout << f << std::endl;
	std::cout << d << std::endl;
}
