
#include "span.hpp"
#include <ctime>
#include <vector>

int	main(void)
{
	Span ps(10);

	std::srand(time(NULL));

	std::cout << "--------------------Test empty span-------------------------\n";
	try
	{
		std::cout << ps.longestSpan() << std::endl;
		std::cout << ps.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		ps.addNumber(1);
		std::cout << ps.longestSpan() << std::endl;
		std::cout << ps.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		try
	{
		ps.addNumber(10);
		std::cout <<"longest span - " << ps.longestSpan() << std::endl;
		std::cout <<"shortest span - " << ps.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "--------------------Subject test-------------------------\n";

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "--------------------Test addd from iterators-------------------------\n";
	std::vector<int> vc;
	for (size_t i = 0; i < 10000; i++)
	{
		vc.push_back(std::rand() % 10000);
	}
	try
	{
		Span sps(100);
		sps.addFromIter(vc.begin(), vc.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sps(10000);
		sps.addFromIter(vc.begin(), vc.end());
		std::cout <<"longest span - " << sps.longestSpan() << std::endl;
		std::cout <<"shortest span - " << sps.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	
}