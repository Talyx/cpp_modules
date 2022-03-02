#include "Phonebook.hpp"


int main(void)
{
	bool	exit;
	Phonebook phone;
	std::string command;

	exit = false;
	while (!exit)
	{
		std::cout<< "➤ ";
		if (std::getline(std::cin, command))
		{
			if (command == "ADD")
				phone.add_contact();
			else if (command == "SEARCH")
				phone.search_contact();
			else if (command == "EXIT")
				exit = true;
		}
		else
		{
			std::cout << "EOF"<< std::endl;
			std::exit(EXIT_SUCCESS);
		}
	}
	return (0);	
}