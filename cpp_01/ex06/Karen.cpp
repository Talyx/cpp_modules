#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout<<"[ DEBUG ]\n";
	std::cout<<"I love to get extra bacon for my 7XL-double-cheese"
			"-triple-pickle-special-ketchup burger. I just love it!\n\n";
}
void	Karen::info(void)
{
	std::cout<<"[ INFO ]\n";
	std::cout<<"I cannot believe adding extra bacon cost more money. You don’t"
		" put enough! If you did I would not have to ask for it!\n\n";
}
void	Karen::warning(void)
{
	std::cout<<"[ WARNING ]\n";
	std::cout<<"I think I deserve to have some extra bacon for free.\n"
		"I’ve been coming here for years and you"
		" just started working here last month.\n\n";
}
void	Karen::error(void)
{
	std::cout<<"[ ERROR ]\n";
	std::cout<<"This is unacceptable, I want to speak to the manager now.\n\n";
}

void	Karen::complain( std::string level )
{
	int		index = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void( Karen::*level_of_func[4])( void ) = 
	{
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	while (index < 4 && levels[index] != level)
		index++;
	while (index == 4)
	{
		std::cout<<"[ Probably complaining about insignificant problems ]\n\n";
		return ;
	}
	switch (index)
	{
	case 0:
		(this->*level_of_func[0])();
	case 1:
		(this->*level_of_func[1])();
	case 2:
		(this->*level_of_func[2])();
	case 3:
		(this->*level_of_func[3])();
		break;
	default:
		break;
	}
	
}

Karen::Karen()
{
}

Karen::~Karen()
{
}