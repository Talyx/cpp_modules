#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <stdint.h>

typedef struct s_Data
{
	int			adress;
	std::string	data;
}				Data;


uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif