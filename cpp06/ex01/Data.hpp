#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <cstdint>

class Data
{
private:
    std::string _name;
    int _age;
    int _height;
    int _weight;
public:
    Data();
    Data(const std::string& name_in, const int& age_in, const int& height_in, const int& weight_in);
    Data(const Data& d);
    ~Data();
    Data& operator=(const Data& d);

    void print();
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
void printData(uintptr_t raw);

#endif