#ifndef CPP_ARRAY_H
#define CPP_ARRAY_H

template<typename T>
class Array
{
public:
	Array();
	~Array();
	Array(const Array &a);
	Array &operator = ( const Array &a );

private:
	T *_array;
	int _length;
};

#endif //CPP_ARRAY_H
