#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default constructor called" << std::endl;
}

Cat::Cat(const std::string name)
: Animal(name)
{
    std::cout << "Parameterized constructor called" << std::endl;
}

Cat::Cat(const Cat& cat)
{
    std::cout << "Copy constructor called" << std::endl;
    type = cat.type;
}

Cat::~Cat()
{
    std::cout << "Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
    if(this == &cat)
        return *this;

    type = cat.type;

    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}