#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& brain)
{
    std::cout << "Brain Copy constructor called" << std::endl;

    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = brain.ideas[i];
    }
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& brain)
{
    std::cout << "Brain Assignment operator called" << std::endl;

    if (this == &brain)
        return *this;
    
    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = brain.ideas[i];
    }

    return *this;
}

void Brain::setIdeas(std::string str)
{
    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = str[i % str.length()];
    }
}

void Brain::printIdeas()
{
    for (int i = 0; i < 100; ++i)
    {
        std::cout << ideas[i];
    }
    std::cout << std::endl;
}