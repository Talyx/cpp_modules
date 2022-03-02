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
	
	bool	operator>(const Fixed &fixed) const;
	bool	operator<(const Fixed &fixed) const;
	bool	operator>=(const Fixed &fixed) const;
	bool	operator<=(const Fixed &fixed) const;
	bool	operator==(const Fixed &fixed) const;
	bool	operator!=(const Fixed &fixed) const;
	
	Fixed	operator+(const Fixed &fixed) const;
	Fixed	operator-(const Fixed &fixed) const;
	Fixed	operator*(const Fixed &fixed) const;
	Fixed	operator/(const Fixed &fixed) const;

	Fixed	operator++(void);
	Fixed	operator++(int n);
	Fixed	operator--(void);
	Fixed	operator--(int n);
	
	Fixed	&min(Fixed &f1, Fixed &f2);
	Fixed const &min(Fixed const &f1, Fixed const &f2);
	Fixed	&max(Fixed &f1, Fixed &f2);
	Fixed static const &max(Fixed const &f1, Fixed const &f2);


	void	setRawBits(int const raw);
	int		getRawBits( void ) const;
	int		toInt ( void ) const;
	float	toFloat( void ) const;
};
std::ostream &operator<<(std::ostream &ostr, Fixed const &fixed);


#endif