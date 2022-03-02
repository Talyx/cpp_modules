#include <iostream>

void	replace(std::string FileName, std::string s1, std::string s2);

int main(int argc, char *argv[])
{
	std::string a;
	std::string b;
	std::string c;

	if (argc != 4)
	{
		std::cout<<"Error: argument"<<std::endl;
		return (1);
	}
	else
	{
		a = argv[1];
		b = argv[2];
		c = argv[3];

		if (a.length() == 0 || b.length() == 0 || c.length() == 0)
			std::cout<<"Error: argument"<<std::endl;
		else
			replace(argv[1], argv[2], argv[3]);
	}
}