#ifndef CPP_CONVERTER_H
#define CPP_CONVERTER_H

#include <iostream>
#include <stdint.h>
#include "Data.h"

class Serializer
{
public:
	Serializer();
	~Serializer();
	Serializer( const Serializer &c );
	Serializer &operator = ( const Serializer &c );
	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);

};


#endif //CPP_CONVERTER_H
