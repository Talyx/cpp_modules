#include <iostream>
#include "Convertor.hpp"
#include <cmath>

int main(int argc, char *argv[])
{
	Convertor conv;

	// if (argc == 1)
	// {
	// 	std::cout << "Empy line. Please usage: ./convertor {char, int, double, float}\n" << std::endl;
	// 	return (1);
	// }
	try
	{
		if (argc == 1)
			throw Convertor::EmptyLine();
		for (int i = 1; i < argc; i++)
		{
			conv.checkNewValue(argv[i]);
		}
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);	
}