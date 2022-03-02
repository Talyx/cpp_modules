#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T1>
void	iter(T1 *arr, size_t size, void (*func) (T1 const &arg))
{
	for (size_t i = 0; i < size; i++)
		(*func)(arr[i]);
}

#endif