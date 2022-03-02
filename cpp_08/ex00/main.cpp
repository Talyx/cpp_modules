#include "easyfind.hpp"
#include <vector>
#include <list>
#include <exception>
#include <iostream>

int main(void)
{
	std::vector<int>	vec;

	for (int i = 0; i < 15; i++)
	{
		vec.push_back(i);
	}

	try
	{
		std::cout << *easyfind(vec, 10) <<std::endl;
		std::cout << *easyfind(vec, 1)	<<std::endl;
		std::cout << *easyfind(vec, 14)	<<std::endl;
		std::cout << *easyfind(vec, 16) <<std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::list<int>	list;

	for (int i = 0; i < 15; i++)
	{
		list.push_back(i + 5);
	}

	try
	{
		std::cout << *easyfind(list, 5) << std::endl;
		std::cout << *easyfind(list, 6) << std::endl;
		std::cout << *easyfind(list, 15) << std::endl;
		std::cout << *easyfind(list, 25) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
		

}