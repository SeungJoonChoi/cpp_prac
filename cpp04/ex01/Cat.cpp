#include "Cat.hpp"

Cat::Cat()
: Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& cat)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    type = cat.type;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
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
    std::cout << "Meow~" << std::endl;
}