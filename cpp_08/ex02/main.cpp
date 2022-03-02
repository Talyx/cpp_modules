#include "mutantstack.hpp"
#include "mutantstack.cpp"

int	main()
{
	std::cout << "-------------------------Subject test---------------------------\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "-----------------------text------------------------------------\n";

	MutantStack<std::string> text;
	text.push("Hello");
	text.push(" ");
	text.push("world");
	text.push("!");
	text.push("aboba");
	std::cout << "top of the text - "<< text.top() << std::endl;
	std::cout << "size text - " << text.size() << std::endl;
	text.pop();
	std::cout << "top of the text after pop - "<< text.top() << std::endl;
	std::cout << "size text after pop() - " << text.size() << std::endl;

	std::cout << "\n-----------------------reverse const---------------------------\n";
	MutantStack<std::string>::const_reverse_iterator it3 = text.crbegin();
	MutantStack<std::string>::const_reverse_iterator it4 = text.crend();

	for (; it3 != it4; it3++)
	{
		std::cout << *it3 ;
	}

	std::cout << "\n-----------------------const-----------------------------------\n";

	MutantStack<std::string>::const_iterator it5 = text.begin();
	MutantStack<std::string>::const_iterator it6 = text.end();

	for (; it5 != it6; it5++)
	{
		std::cout << *it5 ;
	}
	
	std::cout << "\n-----------------------iterator change-------------------------\n";

	MutantStack<std::string>::iterator it1 = text.begin();
	MutantStack<std::string>::iterator it2 = text.end();
	for (; it1 != it2; it1++)
	{
		*it1 = *it1 + "_";
		std::cout << *it1 ;
	}
	
	return 0;
}