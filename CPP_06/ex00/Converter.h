#ifndef CPP_CONVERTER_H
#define CPP_CONVERTER_H

#include <iostream>

class Converter
{
public:
	Converter();
	~Converter();
	Converter( const Converter &c );
	Converter &operator = ( const Converter &c );

	enum types { int_, char_, float_, double_ };
	Converter::types getType( std::string s );

	void	setValues();
	void	printValues();
	int		getInt();
	char	getChar();
	float	getFloat();
	double	getDouble();

private:
	int i;
	char c;
	float f;
	double d;

};


#endif //CPP_CONVERTER_H
