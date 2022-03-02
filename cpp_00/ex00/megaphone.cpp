#include <iostream>
#include <string>
#include <locale>

int main(int argc, char const *argv[])
{
	int     i;
	int     j;

	i = 1;
	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while(argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
					std::cout<<(char) std::toupper(argv[i][j]);
				else
					std::cout<< argv[i][j];
				j++;
			}
			i++;
		}
	}
	std::cout<<std::endl;
}