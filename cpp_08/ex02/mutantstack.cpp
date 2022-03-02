#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &mutant)
{
	*this = mutant;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &mutant)
{
	this->c = mutant.c;
	return (*this);
}

//----------iterator-------------------------

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return(this->c.end());
}

//-----------const iterator--------------------

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin(void) const
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end(void) const
{
	return (this->end());
}

//-----------reverse iterator-----------------------

template<typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin(void)
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend(void)
{
	return (this->c.rend());
}

//-----------const reverse iterator----------------------

template<typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::crbegin(void) const
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::crend(void) const
{
	return (this->c.rend());
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}