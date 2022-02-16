#include "Span.h"

Span::Span() : _size(0)
{}

Span::Span(int N) : _size(N)
{}

Span::~Span()
{}

Span::Span(const Span &s)
{
	*this = s;
}

Span &Span::operator=(const Span &s)
{
	if (this == &s)
		return *this;

	_size = s.getSize();
	int actualSize = _size - s.emptySpase();
	_arr.resize(actualSize);
	for (int i = 0; i < actualSize; i++)
		_arr[i] = s._arr[i];
	return *this;
}

int Span::getSize() const
{
	return _size;
}

int Span::emptySpase() const
{
	return _size - _arr.size();
}

void Span::addNumber(int n)
{
	if (_size == (int)_arr.size())
		throw std::out_of_range("Container is full");
	_arr.push_back(n);
}

void Span::randomFillContainer()
{
	_arr.resize(_size);
	for (int i = 0; i < _size; i++)
//		_arr[i] = std::rand();
		_arr[i] = std::rand() % 100000;
}

void Span::printContainer()
{
	for (int i = 0; i < (int)_arr.size(); i++)
		std::cout << i << ": "<< _arr[i] << std::endl;
}

int Span::longestSpan()
{
	if (_arr.size() < 2)
		throw std::out_of_range("No span was found");
	std::sort(_arr.begin(), _arr.end());
	return *(_arr.end() - 1) - *_arr.begin();
}

int Span::shortestSpan()
{
	if (_arr.size() < 2)
		throw std::out_of_range("No span was found");
	std::sort(_arr.begin(), _arr.end());

	int shortest = _arr[1] - _arr[0];

	if (_arr.size() == 2)
		return shortest;

	for (int i = 2; i < (int)_arr.size(); i++)
	{
		if (_arr[i] == _arr[i - 1])
			continue;
		if (shortest > _arr[i] - _arr[i - 1])
			shortest = _arr[i] - _arr[i - 1];
	}
	return shortest;
}
