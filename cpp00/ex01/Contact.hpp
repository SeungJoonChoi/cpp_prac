#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "Phonebook.hpp"
// first name, last name, nickname, phone number, darkest secret.
class Contact
{
private:
    // std::string _first;
    // std::string _last;
    // std::string _nickname;
    // std::string _phone;
    // std::string _secret;
    std::string info[5];
    int idx;
public:
    void setIdx(int i)
    {
        this->idx = i;
    }
    void setInfo(int i, std::string str)
    {
        this->info[i] = str;
    }
    std::string getInfo(int i)
    {
        return(this->info[i]);
    }
    void display_idx(void)
    {
        for (int i = 0; i < 3; i++)
        {
            if (this->info[i].length() >= 10)
            {
                std::cout << this->info[i].substr(0, 9) << ".|";
            }
            else
                std::cout << std::setw(10) <<  this->info[i] << "|";
        }
        std::cout << std::endl;
    }
    void display_contents(void)
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << this->info[i] << std::endl;
        }
    }
};

#endif