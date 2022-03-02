#include "Convertor.hpp"

Convertor::Convertor()
{

}

Convertor::Convertor(Convertor const &conv)
{
	(void)conv;
}

Convertor &Convertor::operator=(Convertor const &conv)
{
	(void)conv;
	return (*this);
}

bool	Convertor::isAlpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >=97 && c <= 122))
		return (true);
	return (false);
}

bool	Convertor::isNum(int c)
{
	if (c >= 48 && c <= 57)
		return (true);
	return (false);
}

bool	Convertor::checkValid(char const *str)
{
	int	len;
	std::string s = str;

	len = 0;
	while(str[len])
		len++;
	// std::cout<< " len = "<<len << std::endl;
	if (len == 0)
		return (false);
	else if (len == 1)
		return (true);
	else if (len > 1)
	{
		if (isAlpha(str[0]) && isAlpha(str[1])
			&& s != "nan" && s != "nanf")
			return (false);
			
	}
	return (true);	
}

int		Convertor::checkSpecificFloat(char const *str)
{
	int			index = 0;
	std::string s = str;
	std::string type[3] =
	{
		"-inff",
		"+inff",
		"nanf"
	};
	while ( index < 3 && s != type[index])
		index++;
	if (index == 3)
		return (INVALID_TYPE);
	return (FLOAT_TYPE);
}

int		Convertor::checkSpecificDouble(char const *str)
{
	int			index = 0;
	std::string s = str;
	std::string type[3] =
	{
		"-inf",
		"+inf",
		"nan"
	};
	while ( index < 3 && s != type[index])
		index++;
	if (index == 3)
		return (INVALID_TYPE);
	return (DOUBLE_TYPE);
}

int		Convertor::getSpecificNbrType(char const *str)
{
	int	type;

	type = checkSpecificFloat(str);
	if (type != INVALID_TYPE)
		return (type);
	type = checkSpecificDouble(str);
	return (type);
}

int		Convertor::getCommonNbrType(char const *str)
{
	std::string s = str;
	int			index = 0;

	if (str[index] == '-' && str[index + 1] != '\0')
		index++;
	while (isNum(str[index]))
		index++;
	if (str[index] == '\0')
		return (INT_TYPE);
	if (s.length() == 1)
		return (CHAR_TYPE);
	if (str[index] == '.')
		index++;
	else 
		return(INVALID_TYPE);
	while (isNum(str[index]))
		index++;
	if (str[index] == '\0')
		return(DOUBLE_TYPE);
	else if (str[index] == 'f' && str[index + 1] == '\0')
		return (FLOAT_TYPE);
	return (INVALID_TYPE);
}

int		Convertor::getType(char const *str)
{
	int	type;

	type = INVALID_TYPE;
	type = getSpecificNbrType(str);
	if (type != INVALID_TYPE)
		return (type);
	type = getCommonNbrType(str);
	return (type);	
}
void	Convertor::setupType(char const *str)
{
	long	nbr;
	if (this->type == CHAR_TYPE)
		charRes =  *str;
	else if (this->type == INT_TYPE)
	{
		nbr = atol(str);
		if (!(nbr <= std::numeric_limits<int>::max()
		&& nbr >= std::numeric_limits<int>::min()))
			throw Convertor::overflow();
		else
			this->intRes = atoi(str);
	}
	else if (this->type == FLOAT_TYPE)
	{
		floatRes = atof(str);
	}
	else if (this->type == DOUBLE_TYPE)
	{
		doubleRes = atof(str);
	}
	// std::cout << charRes << std::endl;
}

double	Convertor::getNbr(int type)
{
	if (type == CHAR_TYPE)
		return (this->charRes);
	else if (type == INT_TYPE)
		return (this->intRes);
	else if (type == FLOAT_TYPE)
		return (this->floatRes);
	else
		return (this->doubleRes);
}

bool	Convertor::convertToChar(double nbr)
{
	if ((nbr - static_cast<int>(nbr)) != 0
		|| nbr < 0 || nbr > 127)
	{
		std::cout << "char: impossible"<< std::endl;
		return (false);
	}
	else if (nbr < 32 || nbr == 127)
	{
		std::cout<< "char: Non displayable" << std::endl;
		return (false);
	}
	if (this->type == INT_TYPE)
		this->charRes = static_cast<char>(this->intRes);
	else if (this->type == FLOAT_TYPE)
		this->charRes = static_cast<char>(this->floatRes);
	else if (this->type == DOUBLE_TYPE)
		this->charRes = static_cast<char>(this->doubleRes);
	return (true);
}

bool	Convertor::convertToInt(double nbr)
{
	if (!(nbr <= std::numeric_limits<int>::max()
		&& nbr >= std::numeric_limits<int>::min()
		&& nbr != std::numeric_limits<double>::infinity()
		&& nbr != -std::numeric_limits<double>::infinity()
		&& nbr != std::numeric_limits<double>::quiet_NaN()))
	{
		std::cout << "int: impossible" << std::endl;
		return (false);
	}
	if (this->type == CHAR_TYPE)
		this->intRes = this->charRes;
	else if (this->type == FLOAT_TYPE)
		this->intRes = static_cast<int>(this->floatRes);
	else if (this->type == DOUBLE_TYPE)
		this->intRes = static_cast<int>(this->doubleRes);
	return (true);
}

bool	Convertor::convertToFloat(double nbr)
{
	if (!((nbr <= std::numeric_limits<float>::max()
		&& nbr >= -std::numeric_limits<float>::max())
		|| nbr == std::numeric_limits<double>::infinity()
		|| nbr == -std::numeric_limits<double>::infinity()
		|| std::isnan(nbr)))
	{
		std::cout<< "float: impossible" << std::endl;
		return (false);
	}
	if (this->type == CHAR_TYPE)
		this->floatRes = static_cast<float>(this->charRes);
	else if (this->type == INT_TYPE)
		this->floatRes = static_cast<float>(this->intRes);
	else if (this->type == DOUBLE_TYPE)
		this->floatRes = static_cast<float>(this->doubleRes);
	return (true);
}

bool	Convertor::convertToDouble(double nbr)
{
	if (this->type == CHAR_TYPE)
		this->doubleRes = static_cast<double>(this->charRes);
	else if (this->type == INT_TYPE)
		this->doubleRes = static_cast<double>(this->intRes);
	else if (this->type == FLOAT_TYPE)
		this->doubleRes = static_cast<double>(this->floatRes);
	(void)nbr;
	return (true);
}

std::string	Convertor::printEnding(double nbr)
{
	if (this->type == CHAR_TYPE || this->type == INT_TYPE)
		return (".0");
	else if ((nbr - static_cast<int>(nbr)) == 0.0)
		return (".0");
	return ("");
}
void	Convertor::convertToAllType(void)
{
	double nbr;

	nbr = getNbr(this->type);
	if (convertToChar(nbr))
		std::cout << "char: " << this->charRes << std::endl;
	if (convertToInt(nbr))
		std::cout << "int: " << this->intRes << std::endl;
	if (convertToFloat(nbr))
		std::cout << "float: " << this->floatRes << printEnding(nbr) <<"f"<< std::endl;
	if (convertToDouble(nbr))
		std::cout << "double: " << this->doubleRes << printEnding(nbr) << std::endl;
}

void	Convertor::checkNewValue(char const *str)
{
	if (!checkValid(str))
		throw (Convertor::InvalidType());
	this->type = getType(str);
	if (this->type == INVALID_TYPE)
		throw (Convertor::InvalidType());
	setupType(str);
	convertToAllType();
	std::cout<< std::endl;
}

Convertor::~Convertor()
{

}