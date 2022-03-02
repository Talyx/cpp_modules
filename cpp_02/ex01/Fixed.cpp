#include "Fixed.hpp"

Fixed::Fixed():
	point(0)
{
	std::cout<<"Default	constructor calldes\n";
}

Fixed::Fixed( Fixed const &fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed::Fixed( int const nbr)
{
	std::cout<< "Int constructor called\n";
	this->point = nbr << this->bits;
}

Fixed::Fixed( float const nbr)
{
	std::cout<< "Float constructor called\n";
	this->point = (int)roundf(nbr * (1 << this->bits));
}

Fixed::~Fixed()
{
	std::cout<<"Destructor callded\n";
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->point = fixed.getRawBits();
	return(*this);
}

int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called\n";
	return (this->point);
}

void	Fixed::setRawBits( int const raw )
{
	this->point = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->point / (float)(1 << this->bits));
}

int	Fixed::toInt( void ) const
{
	return (this->point >> this->bits);
}

std::ostream &operator<<(std::ostream &ostr, Fixed const &fixed)
{
	ostr << fixed.toFloat();
	return (ostr);
}