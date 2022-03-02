#include "Fixed.hpp"

int	print_binary(int nbr)
{
	int	k = 31;
	for (size_t i = 0; i < 32; i++)
	{
		if ((nbr >> k) & 1)
			std::cout<<"1";
		else
			std::cout<<"0";
		k--;
	}
	std::cout<<std::endl;
	return (0);
	
}

int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}