#include "iter.hpp"
#include <iostream>

class Awesome
{
public:

	Awesome( void ) : _n( 42 ) { return; } 
	int get( void ) const { return this->_n; } 
private: int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; } 

template< typename T >
void print( T const & x ) 
{ 
	std::cout << x << std::endl; 
	return; 
} 
	
int main() 
{
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- Inever understood why you can't write int[] tab. Wouldn't that make more sense? 
	Awesome tab2[5];
	
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;

}




// template <typename T1>
// void	printArr(T1 const  &arr)
// {
// 	std::cout << arr <<std::endl;
// }

// int main(void)
// {
// 	std::string s[5] = 	{ "a", "b", "c", "d", "e"};
// 	int			ar[5] = {1, 2, 3, 4, 5};
// 	double		dr[5] = {1.2, 2.2, 3.2, 4.2, 5.1};

// 	::iter(s, 5, &printArr);
// 	std::cout << "------------------------\n";
// 	::iter(ar, 5, &printArr);
// 	std::cout << "------------------------\n";
// 	::iter(dr, 5, &printArr);
// 	std::cout << "------------------------\n";
// }