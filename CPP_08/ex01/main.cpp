#include "Span.h"

int	main( void )
{
	Span sp(10000);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span s(1000000);
	s.randomFillContainer();
	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;
}
