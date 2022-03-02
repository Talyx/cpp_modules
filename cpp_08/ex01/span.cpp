#include "span.hpp"

Span::Span()
{
	size = 0;
}

Span::Span(unsigned int n)
{
	size = n;
}
Span::Span(Span const &sp)
{
	*this = sp;
}
Span &Span::operator=(Span const &sp)
{
	this->arr = sp.arr;
	this->size = sp.size;
	return (*this);
}

void	Span::addNumber(int	nbr)
{
	if (this->arr.size() == this->size)
		throw	std::runtime_error("Not enough free space.");
	this->arr.insert(nbr);
}

// template <typename iter>
// void	Span::addFromIter(iter start, iter end)
// {
// 	if (this->arr.size() + std::distance(start, end) > this->size)
// 		throw std::runtime_error("Not enough free space.");
// 	this->arr.insert(start, end);
// }

int	Span::shortestSpan()
{
	std::multiset<int>::iterator it1;
	std::multiset<int>::iterator it2;
	int	len;

	
	if (this->arr.size() < 2)
		throw 	std::runtime_error("Not enough parameters to count.");
	for (it1 = this->arr.begin(), it2 = ++this->arr.begin(), len = *it2 - *it1; it2 != this->arr.end(); it1++, it2++)
	{
		if ((*it2 - *it1) < len)
			len = *it2 - *it1;
	}
	return (len);
}

int	Span::longestSpan()
{
	if (this->arr.size() < 2)
		throw 	std::runtime_error("Not enough parameters to count.");
	return (*std::max_element(this->arr.begin(), this->arr.end()) - *std::min_element(this->arr.begin(), this->arr.end()));
}

Span::~Span()
{
}