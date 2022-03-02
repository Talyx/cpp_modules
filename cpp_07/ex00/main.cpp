#include "whatever.hpp"

class Awesome
{
	public:
		Awesome(void) : _n(0) {}
		Awesome( int n ) : _n( n ) {}
		Awesome & operator= (Awesome & a) { _n = a._n; return *this; } 
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); } 
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); } 
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); } 
		bool operator>=( Awesome const & rhs ) const { return(this->_n >= rhs._n); } 
		bool operator<=( Awesome const & rhs ) const {return (this->_n <= rhs._n); } 
		int get_n() const { return _n; } 
		
	private: 
		int _n; 
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }


int main(void)
{
	Awesome a(2), b(4); 
	swap(a,b);
	std::cout << a << " " << b << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << min(a, b) << std::endl;
	return (0);
}

// int main(void)
// {
// 	int	a = 10;
// 	int b = 11;

// 	double c = 4.2;
// 	double d = 5.5;

// 	std::string e = "Hello ";
// 	std::string f = "world!";

// 	std::cout << " a = " << a << " b = " << b << " swap();"<< std::endl;
// 	::swap(a, b);
// 	std::cout <<" a = " << a << " b = " << b <<std::endl;
// 	std::cout <<" min(a, b) = " << ::min(a, b) << " a = " << a << " b = " << b << std::endl;
// 	std::cout <<" max(a, b) = " << ::max(a, b) << " a = " << a << " b = " << b << std::endl;
// 	std::cout << "------------------------------------------------------------\n";
// 	std::cout << " c = " << c << " d = " << d << " swap();"<< std::endl;
// 	::swap(c , d);
// 	std::cout << " c = " << c << " d = " << d << std::endl;
// 	std::cout <<" min(c, d) = " << ::min(c, d) << " c = " << c << " d = " << d << std::endl;
// 	std::cout <<" max(c, d) = " << ::max(c, d) << " c = " << c << " d = " << d << std::endl;
// 	std::cout << "------------------------------------------------------------\n";
// 	std::cout << " e = " << e << " f = " << f << " swap();"<< std::endl;
// 	::swap(e, f);
// 	std::cout << " e = " << e << " f = " << f << std::endl;
// 	std::cout <<" min(e, f) = " << ::min(e, f) << " e = " << e << " f = " << f << std::endl;
// 	std::cout <<" max(e, f) = " << ::max(e, f) << " e = " << e << " f = " << f << std::endl;

// }