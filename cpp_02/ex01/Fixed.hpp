#ifndef FIXED_HPP
# define FIXED_HPP


#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	point;
	static const int bits = 8;
public:
	Fixed();
	Fixed( Fixed const &fixed);
	Fixed( int const	fixed );
	Fixed( float  const fixed );
	~Fixed();
	Fixed	&operator=(Fixed const &fixed);
	void	setRawBits(int const raw);
	int		getRawBits( void ) const;
	int		toInt ( void ) const;
	float	toFloat( void ) const;
};
std::ostream &operator<<(std::ostream &ostr, Fixed const &fixed);


#endif