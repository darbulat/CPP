#ifndef CPP_EASYFIND_H
#define CPP_EASYFIND_H

#include <iterator>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T &vect, int a)
{
	typename T::iterator it;
	it = std::find(vect.begin(), vect.end(), a);
	if (it == vect.end())
		throw std::exception();
	return it;
}

#endif //CPP_EASYFIND_H
