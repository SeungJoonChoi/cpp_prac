#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default constructor called" << std::endl;
}

Dog::Dog(const std::string name)
: Animal(name)
{
    std::cout << "Parameterized constructor called" << std::endl;
}

Dog::Dog(const Dog& dog)
{
    std::cout << "Copy constructor called" << std::endl;
    type = dog.type;
}

Dog::~Dog()
{
    std::cout << "Destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
    if(this == &dog)
        return *this;

    type = dog.type;

    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}