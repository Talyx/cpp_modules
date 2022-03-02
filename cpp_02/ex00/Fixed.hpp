#ifndef FIXED_HPP
# define FIXED_HPP


#include <iostream>

class Fixed
{
private:
	int	point;
	static const int bits = 8;
public:
	Fixed();
	Fixed( Fixed const &fixed);
	Fixed &operator=(Fixed const &fixed);
	void	setRawBits(int const raw);
	int		getRawBits( void ) const;
	~Fixed();
};



#endif