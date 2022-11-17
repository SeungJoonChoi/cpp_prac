#include "Dog.hpp"

Dog::Dog()
: Animal("Dog")
{       
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog& dog)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    type = dog.type;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
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
    std::cout << "Woof!" << std::endl;
}