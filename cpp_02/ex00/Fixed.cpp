#include "Fixed.hpp"

Fixed::Fixed():
	point(0)
{
	std::cout<<"Default	constructor called\n";
}

Fixed::Fixed( Fixed const &fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
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
	std::cout << "getRawBits member function called\n";
	return (this->point);
}

void	Fixed::setRawBits( int const raw )
{
	this->point = raw;
}
