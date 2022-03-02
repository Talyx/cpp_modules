#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
private:
	
public:
	MutantStack(void);
	MutantStack(MutantStack<T> const &mutant);

	MutantStack<T> &operator=(MutantStack<T> const &mutant);

	typedef	typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator				begin(void);
	iterator				end(void);
	const_iterator			begin(void) const;
	const_iterator			end(void) const;
	reverse_iterator		rbegin(void);
	reverse_iterator		rend(void);
	const_reverse_iterator	crbegin(void) const;
	const_reverse_iterator	crend(void) const;


	virtual ~MutantStack();
};

#endif