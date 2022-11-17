#include "Cat.hpp"

Cat::Cat()
: Animal("Cat"), brain(NULL)
{
    std::cout << "Cat Default constructor called" << std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat& cat)
: brain(NULL)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    type = cat.type;
    brain = new Brain();
    *brain = *cat.brain;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete brain;
}

Cat& Cat::operator=(const Cat& cat)
{
    if(this == &cat)
        return *this;

    type = cat.type;
    *brain = *cat.brain;

    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow~" << std::endl;
}

Brain* Cat::getBrain(void)
{
    return brain;
}