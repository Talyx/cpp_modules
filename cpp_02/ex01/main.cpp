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
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}