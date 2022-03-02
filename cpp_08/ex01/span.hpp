#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <set>

class Span
{
private:
	std::multiset<int>	arr;
	unsigned int		size;
public:
	Span(void);
	Span(unsigned int n);
	Span(Span const &Span);
	
	Span &operator=(Span const &sp);
	template <typename iter>
	void	addFromIter(iter start,  iter end)
	{
		if (this->arr.size() + std::distance(start, end) > this->size)
			throw std::runtime_error("Not enough free space.");
		this->arr.insert(start, end);
	}
	void	addNumber(int nbr);
	
	int		shortestSpan(void);
	int		longestSpan(void);

	~Span();

};




#endif