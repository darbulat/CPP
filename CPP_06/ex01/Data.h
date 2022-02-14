#ifndef CPP_DATA_H
#define CPP_DATA_H

#include <iostream>

class Data
{
public:
	Data();
	Data(int i, char c, float f, double d, std::string s);
	~Data();
	Data( const Data &d );
	Data &operator = ( const Data &d );

	bool operator == ( const Data &d );

	int getInt() const;
	char getChar() const;
	float getFloat() const;
	double getDouble() const;
	std::string getString() const;

private:
	int			_int;
	char		_char;
	float		_float;
	double		_double;
	std::string	_string;

};


#endif //CPP_DATA_H
