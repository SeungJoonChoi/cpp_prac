#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    std::string contents[5];
    int amount;
public:
    PhoneBook();
    void addContent();
    void searchContent();
};

#endif