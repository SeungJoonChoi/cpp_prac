#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

void print(uintptr_t raw)
{
    Data* data;

    data = deserialize(raw);

    std::cout << "name: " << data->_name << std::endl;
    std::cout << "age: " << data->_age << std::endl;
    std::cout << "height: " << data->_height << std::endl;
    std::cout << "weight: " << data->_weight << std::endl;
}