// #include "Array.hpp"
// #include <iostream>

// int main()
// {
// 	Array<int> a(10);
// 	Array<int> a2;
// 	for (unsigned int i = 0; i < 10; i++)
// 	{
// 		a[i] = i;
// 		std::cout << a[i] << " ";
// 	}

// 	std::cout<<std::endl;
// 	a2 = a;
// 	for (unsigned int i = 0; i < 10; i++)
// 	{
// 		std::cout << a2[i] << " ";
// 	}
// 	std::cout<<std::endl;

// 	Array<std::string> s(5);
// 	for (unsigned int i = 0; i < 5; i++)
// 	{
// 		s[i] = "abc";
// 		std::cout << s[i] << " ";
// 	}
// 	std::cout<<std::endl;

// 	try
// 	{
// 		Array<int> b(10);
// 		std::cout << b[10] << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// }
#include <iostream>
#include <Array.hpp>
#include <cstdlib>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}