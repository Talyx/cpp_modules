#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>
#include <cctype>

template <typename T>
class Array
{
private:
	unsigned int len;
	T *arr;
	
public:
	Array(void);
	Array(unsigned int n);
	Array(Array<T> const &arr);

	Array<T> &operator=(Array<T> const &arr);
	
	T &operator[](unsigned int index);

	unsigned int size(void) const;	

	~Array();

public:
	class OutOfBoundException: public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("\033[31mError: Out of bound memory\033[0m");
		}
	};
};

template <typename T>
Array<T>::Array()
{
	this->len = 0;
	this->arr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->len = n;
	this->arr = new T[n]();
}

template <typename T>
Array<T>::Array(Array<T> const &arr)
{
	this->len = arr.len;
	if (arr.len > 0)
	{
		this->arr = new T[arr.len]();
		for (unsigned int i = 0; i < arr.len; i++)
		{
			this->arr[i] = arr.arr[i];
		}
	}
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &arr)
{
	this->len = arr.len;
	if (this->arr)
		delete[] this->arr;
	if (arr.len > 0)
	{
		this->arr = new T[arr.len]();
		for (unsigned int i = 0; i < arr.len; i++)
		{
			this->arr[i] = arr.arr[i];
		}
	}
	else
		this->arr = NULL;
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->len)
		throw (Array<T>::OutOfBoundException());
	// else if (index < 0)
	// 	throw (Array<T>::OutOfBoundException());
	return (this->arr[index]);
}

template <typename T>
Array<T>::~Array()
{
	if (this->arr)
		delete[] this->arr;
}



#endif