#include "Fixed.hpp"
//---------------------------Constructor/Destructor-------------
Fixed::Fixed():
	point(0)
{
	// std::cout<<"Default	constructor calldes\n";
}

Fixed::Fixed( Fixed const &fixed)
{
	// std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed::Fixed( int const nbr)
{
	// std::cout<< "Int constructor called\n";
	this->point = nbr << this->bits;
}

Fixed::Fixed( float const nbr)
{
	// std::cout<< "Float constructor called\n";
	this->point = (int)roundf(nbr * (1 << this->bits));
}

Fixed::~Fixed()
{
	// std::cout<<"Destructor callded\n";
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
	// std::cout << "Assignation operator called" << std::endl;
	this->point = fixed.getRawBits();
	return(*this);
}
//-----------------------------Get/Set--------------------------
int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called\n";
	return (this->point);
}

void	Fixed::setRawBits( int const raw )
{
	this->point = raw;
}

//----------------------------ToInt/ToFloat----------------------
float	Fixed::toFloat( void ) const
{
	return ((float)this->point / (float)(1 << this->bits));
}

int	Fixed::toInt( void ) const
{
	return (this->point >> this->bits);
}

//----------------------------overloads---------------------------

std::ostream &operator<<(std::ostream &ostr, Fixed const &fixed)
{
	ostr << fixed.toFloat();
	return (ostr);
}

//-----------comparison-----------

bool	Fixed::operator>(const Fixed &fixed)const
{
	return(this->getRawBits() > fixed.getRawBits());
}

bool	Fixed::operator<(const Fixed &fixed)const
{
	return(this->getRawBits() < fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixed)const
{
	return(this->getRawBits() >= fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed &fixed)const
{
	return(this->getRawBits() <= fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed &fixed)const
{
	return(this->getRawBits() == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed &fixed)const
{
	return(this->getRawBits() != fixed.getRawBits());
}

//-------------Arithmetic-----------

Fixed Fixed::operator+(const Fixed &fixed) const
{
	Fixed	test(this->getRawBits() + fixed.getRawBits());

	return (test);
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	Fixed	test(this->getRawBits() - fixed.getRawBits());

	return (test);
}

Fixed	Fixed::operator*(Fixed const &fixed)const
{
	Fixed	test(this->toFloat() * fixed.toFloat());

	return (test);
}

Fixed Fixed::operator/(Fixed const &fixed) const
{
	Fixed	test(this->toFloat() / fixed.toFloat());

	return (test);
}

//---------Increment/Decrement---------

Fixed	Fixed::operator++(void)
{
	this->point += 1;
	return (*this);
}

Fixed 	Fixed::operator++(int)
{

	Fixed	f(*this);

	this->point += 1;
	return (f);
}

Fixed	Fixed::operator--(void)
{
	--(this->point);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	f(*this);

	this->point -= 1;
	return (f);
}

//---------------------------------------------min/max------------------------------------

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return(f1);
	return (f2);
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return(f1);
	return (f2);
}

const  Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}