#ifndef CPP_SPAN_H
#define CPP_SPAN_H

#include <vector>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <limits>

class Span
{
public:
	Span();
	Span(int N);
	~Span();
	Span( const Span &s );
	Span & operator = ( const Span &s );

	int getSize() const;
	int emptySpase() const;

	void	printContainer();
	void	addNumber(int n);
	void	randomFillContainer();
	int		shortestSpan();
	int		longestSpan();


private:
	int _size;
	std::vector<int> _arr;

};


#endif //CPP_SPAN_H
