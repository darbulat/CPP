#include <iostream>
#include <stdlib.h>
#include "Base.h"

#include "A.h"
#include "B.h"
#include "C.h"

Base *generate()
{
	int r;
	Base *base;
	r = rand();
	if (r % 3 == 0)
		base = new A();
	else if (r % 3 == 1)
		base = new B();
	else
		base = new C();
	return base;
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{
	}

}

int main()
{
	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;
	std::cout << "-------------------------------" << std::endl;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	std::cout << "-------------------------------" << std::endl;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	std::cout << "-------------------------------" << std::endl;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	std::cout << "-------------------------------" << std::endl;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	std::cout << "-------------------------------" << std::endl;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	std::cout << "-------------------------------" << std::endl;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	std::cout << "-------------------------------" << std::endl;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	std::cout << "-------------------------------" << std::endl;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	std::cout << "-------------------------------" << std::endl;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	std::cout << "-------------------------------" << std::endl;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	std::cout << "-------------------------------" << std::endl;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	std::cout << "-------------------------------" << std::endl;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	std::cout << "-------------------------------" << std::endl;
}
