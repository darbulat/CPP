#ifndef CPP_ARRAY_H
#define CPP_ARRAY_H

#include <iostream>

template<typename T>
class Array
{
public:
	Array() : _array(NULL), _length(0)
	{}
	~Array()
	{
		if (_length > 0)
			delete [] _array;
	}

	Array(int n) : _length(n)
	{
		if (n < 0)
			throw std::out_of_range("Index must be positive");
		_array = new T[n];
	}

	Array(const Array &a)
	{
		*this = a;
	}

	Array &operator = ( const Array &a )
	{
		if (this == &a)
			return *this;
		_length = a.size();
		_array = new T[_length];

		for (unsigned int i = 0; i < _length; i++)
			this->_array[i] = a._array[i];
		return *this;
	}

	T &operator [] ( int i)
	{
		if (i < 0 || (unsigned int)i >= _length)
			throw std::out_of_range("Index is out of bounds");
		return _array[i];
	}

	unsigned int size() const
	{
		return _length;
	}


private:
	T 				*_array;
	unsigned int	_length;
};

#endif //CPP_ARRAY_H

