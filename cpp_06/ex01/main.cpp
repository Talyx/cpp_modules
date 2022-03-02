#include "Serialize.hpp"

int main(void)
{
	uintptr_t raw;
	Data *ptr = new Data;
	Data *de_ptr;

	ptr->adress = 1337;
	ptr->data = "Hello world!";
	raw = serialize(ptr);
	de_ptr = deserialize(raw);
	std::cout << "adress: " <<de_ptr->adress << "; data: "<<de_ptr->data << std::endl;
}