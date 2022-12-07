#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

struct Data
{
    std::string _name;
    int _age;
    int _height;
    int _weight;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
void print(uintptr_t raw);

#endif