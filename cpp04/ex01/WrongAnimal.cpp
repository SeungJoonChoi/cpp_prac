#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
: type("")
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string name)
: type(name)
{
    std::cout << "WrongAnimal Parameterized constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    type = animal.type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& animal)
{
    if(this == &animal)
        return *this;

    type = animal.type;

    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "???" << std::endl;
}

const std::string& WrongAnimal::getType(void) const
{
    return type;
}