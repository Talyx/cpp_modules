#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <iomanip>

class Phonebook
{
private:
    Contact             contacts[8];
    std::string         fields[5];
    int                 count;
    int                 size;
public:
    std::string     format_field(std::string field);
    void            set_fields(void);
    void            add_contact(void);
    void            add_full(void);
    void            search_contact(void);
    void            searchPrompt();
    bool            is_nbr(std::string s);
    Phonebook();
    ~Phonebook();
};

#endif