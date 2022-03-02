#include "Karen.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout<<"Usage: ./karenFilter _LOG_LEVEL_"<<std::endl;
	}
	else
	{
		Karen k;
		k.complain(argv[1]);
	}
	return (0);
}