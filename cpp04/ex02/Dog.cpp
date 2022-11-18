#include "Dog.hpp"

Dog::Dog()
: Animal("Dog"), brain(NULL)
{       
    std::cout << "Dog Default constructor called" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog& dog)
: brain(NULL)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    type = dog.type;
    brain = new Brain();
    *brain = *dog.brain;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete brain;
}

Dog& Dog::operator=(const Dog& dog)
{
    if(this == &dog)
        return *this;

    type = dog.type;
    *brain = *dog.brain;

    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

Brain* Dog::getBrain(void)
{
    return brain;
}