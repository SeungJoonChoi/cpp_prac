#include "Animal.hpp"

Animal::Animal()
: type("")
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const std::string name)
: type(name)
{
    std::cout << "Animal Parameterized constructor called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    type = animal.type;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& animal)
{
    if(this == &animal)
        return *this;

    type = animal.type;

    return *this;
}

void Animal::makeSound() const
{
    std::cout << "???" << std::endl;
}

const std::string& Animal::getType(void) const
{
    return type;
}