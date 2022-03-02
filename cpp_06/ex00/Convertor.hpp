#ifndef CONVERTOR_HPP
#define CONVERTOR_HPP

#include <iostream>
#include <exception>
#include <cmath>
#include <limits>

// #define INT_TYPE		1
// #define CHAR_TYPE		2
// #define FLOAT_TYPE		3
// #define DOUBLE_TYPE		4
// #define INVALID_TYPE	0

class Convertor
{
private:
	int		intRes;
	char	charRes;
	float	floatRes;
	double	doubleRes;
	int			type;

	bool	isAlpha(int c);
	bool	isNum(int c);
	
	bool	checkValid(char const *str);
	int		checkSpecificFloat(char const *str);
	int		checkSpecificDouble(char const *str);
	
	int		getType(char const *str);
	int		getSpecificNbrType(char const *str);
	int		getCommonNbrType(char const *str);
	double	getNbr(int type);
	
	void	convertToAllType(void);
	bool	convertToChar(double nbr);
	bool	convertToInt(double nbr);
	bool	convertToFloat(double nbr);
	bool	convertToDouble(double nbr);

	std::string	printEnding(double nbr);

	void	setupType(char const *str);

	enum Type
	{
		INT_TYPE,
		CHAR_TYPE,
		FLOAT_TYPE,
		DOUBLE_TYPE,
		INVALID_TYPE		
	};
	
public:
	Convertor();
	Convertor(Convertor const &conv);
	
	Convertor &operator=(Convertor const &conv);
	
	void	checkNewValue(char const *value);
	// void	printValue(void);

	~Convertor();
public:
	class EmptyLine: public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Empy line. Please usage: ./convertor {char, int, double, float}");
		}
	};
	class InvalidType: public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Invalid type. Please usage: ./convertor {char, int, double, float}");
		}
	};
	class overflow : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Invalid arg. Overflow!");
		}
	};
};


#endif