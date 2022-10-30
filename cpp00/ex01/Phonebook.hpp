#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class Phonebook
{
private:
    Contact contact[8];
    std::string contents[5];
    int amount;
public:
    Phonebook()
    {
        this->contents[0] = "fist name";
        this->contents[1] = "last name";
        this->contents[2] = "nickname";
        this->contents[3] = "phone number";
        this->contents[4] = "darkest secret";
        this->amount = 0;
        for(int i = 0; i < 8; i++)
            this->contact[i].setIdx(i);
    }
    void addContent()
    {
        std::string str;

        for(int i = 0; i < 5; i++)
        {
            std::cout << this->contents[i] << " : ";
            std::getline(std::cin, str);
            this->contact[this->amount % 8].setInfo(i, str);
        }
        if (this->amount < 8)
            this->amount++;
    }
    void searchContent()
    {
        int idx;

        if (this->amount == 0)
        {
            std::cout << "Empty" << std::endl;
            return ;
        }
        for(int i = 0; i < this->amount; i++)
        {
            std::cout << std::setw(10) << i << "|"; 
            this->contact[i].display_idx();
        }
        while (1)
        {
            std::cout << "Choose index : ";
            std::cin >> idx;
            if (std::cin.fail() || idx < 0 || idx >= this->amount)
            {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cout << "Invalid index." << std::endl;
            }
            else
            {
                std::cin.ignore(32767, '\n');
                this->contact[idx].display_contents();
                break ;
            }
        }
    }
};

#endif