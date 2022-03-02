#include <iostream>
#include <fstream>

std::string outputName(std::string FileName)
{
	int	len;
	std::string outputFile;

	len = FileName.length();
	for (size_t i = 0; i < FileName.length(); i++)
	{
		if (std::islower(FileName[i]))
			outputFile += std::toupper(FileName[i]);
		else
			outputFile += FileName[i];
	}
	outputFile += ".replace";
	return (outputFile);
}

void	replace(std::string FileName, std::string s1, std::string s2)
{
	std::string		text;
	std::string		outputFile = "";
	std::ifstream	infile;
	std::ofstream	outfile;
	int				s1_size;

	s1_size = s1.length();
	infile.open(FileName);
	if (!infile)
	{
		std::cout << "Error: filename" << std::endl;
		return ;
	}
	outputFile = outputName(FileName);
	outfile.open(outputFile);
	if (!outfile)
	{
		std::cout << "Error: cannot create output file" << std::endl;
		infile.close();
		return ;
	}
	while (getline(infile, text, '\n'))
	{
		for (size_t i = 0; i < text.length(); i++)
		{
			if (text.compare(i, s1_size, s1) == 0)
			{
				text.erase(i, s1_size);
				text.insert(i, s2);
			}
		}
		outfile << text << std::endl;
	}
	infile.close();
	outfile.close();
}