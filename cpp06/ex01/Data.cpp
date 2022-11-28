#include "Data.hpp"

Data::Data()
: _name("unknown"), _age(0), _height(0), _weight(0)
{
}

Data::Data(const std::string& name_in, const int& age_in, const int& height_in, const int& weight_in)
: _name(name_in), _age(age_in), _height(height_in), _weight(weight_in)
{
}

Data::Data(const Data& d)
: _name(d._name), _age(d._age), _height(d._height), _weight(d._weight)
{
}

Data::~Data()
{
}

Data& Data::operator=(const Data& d)
{
    if(this == &d)
        return *this;

    _name = d._name;
    _age = d._age;
    _height = d._height;
    _weight = d._weight;
    
    return *this;
}

void Data::print()
{
    std::cout << "name: " << _name << std::endl;
    std::cout << "age: " << _age << std::endl;
    std::cout << "height: " << _height << std::endl;
    std::cout << "weight: " << _weight << std::endl;
}

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}