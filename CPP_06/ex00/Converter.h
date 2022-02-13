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

	enum types { char_, int_, float_, double_, nan_, nanf_, wrong_ };
	Converter::types getType( std::string s );
	std::string	getType();
	void		setType( std::string s );

	void		setValues( std::string s );
	void		printValues();
	int			getInt();
	char		getChar();
	float		getFloat();
	double		getDouble();

private:
	int			i;
	char		c;
	float		f;
	double		d;
	std::string	str;
	static bool	ft_isdigit(char c);
	Converter::types type;

};


#endif //CPP_CONVERTER_H
