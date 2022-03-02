#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iostream>

template <typename T>
typename T::iterator	easyfind(T &container, int	sr)
{
	typename	T::iterator res;

	res = find(container.begin(), container.end(), sr);
	if (res == container.end())
		throw std::runtime_error("Not found!");
	return (res);
}

#endif