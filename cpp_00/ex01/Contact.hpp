#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone;
    std::string secret;
    bool       status;
    static std::string hed[5];

public:
    bool get_status();
	std::string  get_firstName();
	std::string  get_lastName();
	std::string  get_nickname();
	std::string  get_phone();
	std::string  get_secret();
	void print(void);
	void set_status(bool status);
	void set_firstName(std::string firstName);
	void set_lastName(std::string  lastName);
	void set_nickname(std::string nickname);
	void set_phone(std::string phone);
	void set_secret(std::string secret);
	void clear_old(void);
    Contact();
    ~Contact();
};

#endif