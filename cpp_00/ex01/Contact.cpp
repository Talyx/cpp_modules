#include "Contact.hpp"

Contact::Contact()
{
    this->status = false;
}

Contact::~Contact()
{
}

bool    Contact::get_status(void)
{
    return(this->status);
}

std::string Contact::get_firstName(void)
{
    return(this->first_name);
}

std::string Contact::get_lastName(void)
{
    return(this->last_name);
}

std::string Contact::get_nickname(void)
{
    return(this->nickname);
}

std::string Contact::get_phone(void)
{
    return(this->phone);
}

std::string Contact::get_secret(void)
{
    return(this->secret);
}

void Contact::set_firstName(std::string firstName)
{
    this->first_name = firstName;
}

void Contact::set_lastName(std::string lastName)
{
    this->last_name = lastName;
}

void Contact::set_nickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::set_phone(std::string phone)
{
    this->phone = phone;
}

void Contact::set_secret(std::string secret)
{
    this->secret = secret;
}

void Contact::set_status(bool status)
{
    this->status = status;
}

void Contact::clear_old(void)
{
    this->first_name.clear();
    this->last_name.clear();
    this->nickname.clear();
    this->phone.clear();
    this->secret.clear();
    this->status = false;
}
