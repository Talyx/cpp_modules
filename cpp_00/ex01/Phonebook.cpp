#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	count = 0;
	size = 8;
	set_fields();
}

Phonebook::~Phonebook()
{
}
void	Phonebook::set_fields(void)
{
	this->fields[0] = "first name";
	this->fields[1] = "last name";
	this->fields[2] = "nickname";
	this->fields[3] = "phone number";
	this->fields[4] = "darkest secret";
}

std::string	Phonebook::format_field(std::string field)
{
	if (field.size() > 10)
	{
		field = field.insert(9, ".");
		field = field.substr(0, 10);
	}
	else
	{
		while (field.length() < 10)
		{
			field = field.insert(0, " ");
		}
	}
	return (field);
}

void    Phonebook::add_contact(void)
{
	std::string fields;
	int			i;

	i = 0;
	if (count == size)
		Phonebook::add_full();
	while (i < 5)
	{
		std::cout<< this->fields[i]<< ":";
		if (std::getline(std::cin, fields))
		{
			if (fields.length() > 0)
			{
				if (i == 0)
					contacts[count].set_firstName(fields);
				else if (i == 1)
					contacts[count].set_lastName(fields);
				else if (i == 2)
					contacts[count].set_nickname(fields);
				else if (i == 3)
					contacts[count].set_phone(fields);
				else if (i == 4)
					contacts[count].set_secret(fields);
				i++;
			}
		}
		else
		{
			std::cout<< std::endl <<"➤ ";
			std::cout << "EOF"<< std::endl;
			std::exit(EXIT_SUCCESS);
		}
	}
	contacts[count].set_status(true);
	if (count != size)
		count++;
}

void	Phonebook::add_full(void)
{
	int	i;

	i = 1;
	std::cout<<"Delete old contact\n";
	while (i < size)
	{
		contacts[i - 1] = contacts[i];
		i++;
	}
	contacts[size - 1].clear_old();
	count--;	
}

void	Phonebook::searchPrompt(void)
{
	std::cout<< std::setfill(' ') << std::setw(10)<< "index" << "|";
	std::cout<< std::setfill(' ') << std::setw(10)<< "first name" << "|";
	std::cout<< std::setfill(' ') << std::setw(10)<< "last name" << "|";
	std::cout<< std::setfill(' ') << std::setw(10)<< "nickname" << "|";
	std::cout << std::endl;
}

bool Phonebook::is_nbr(std::string s)
{
	if (s == "0" || s == "1" || s == "2" || s == "3"
		|| s == "4" || s == "5" || s == "6" || s == "7")
		return (true);
	return (false);
}

void    Phonebook::search_contact(void)
{
	int	i;
	int	nbr;
	std::string index;

	i = 0;
	if (count == 0)
		std::cout<< "Empty phonebook\n";
	else
	{
		searchPrompt();
		while (i < 8 && contacts[i].get_status())
		{
			std::cout<< std::setfill(' ') << std::setw(10)<< i << "|";
			std::cout<< std::setfill(' ') << std::setw(10)<< format_field(contacts[i].get_firstName()) << "|";
			std::cout<< std::setfill(' ') << std::setw(10)<< format_field(contacts[i].get_lastName()) << "|";
			std::cout<< std::setfill(' ') << std::setw(10)<< format_field(contacts[i].get_nickname()) << "|";
			std::cout<<std::endl;
			i++;
		}
		std::cout<<"select an index to view detailed information\n";
		if (std::getline(std::cin, index))
		{
			if (index.length() != 1 || !is_nbr(index))
				return ;
			nbr = atoi(index.c_str());
			if (nbr > 7 || nbr < 0 || !contacts[nbr].get_status())
				return ;
			std::cout << this->fields[0] <<" : "<< contacts[nbr].get_firstName() << std::endl;
			std::cout << this->fields[1] <<" : "<< contacts[nbr].get_lastName() << std::endl;
			std::cout << this->fields[2] <<" : "<< contacts[nbr].get_nickname() << std::endl;
			std::cout << this->fields[3] <<" : "<< contacts[nbr].get_phone() << std::endl;
			std::cout << this->fields[4] <<" : "<< contacts[nbr].get_secret() << std::endl;
		}
		else
		{
			std::cout<< std::endl <<"➤ ";
			std::cout << "EOF"<< std::endl;
			std::exit(EXIT_SUCCESS);
		}
	}

	
}