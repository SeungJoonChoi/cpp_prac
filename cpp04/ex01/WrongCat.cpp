#include "WrongCat.hpp"

WrongCat::WrongCat()
: WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default constructor called" << std::endl;
}

// WrongCat::WrongCat(const std::string name)
// : WrongAnimal(name)
// {
//     std::cout << "WrongCat Parameterized constructor called" << std::endl;
// }

WrongCat::WrongCat(const WrongCat& cat)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    type = cat.type;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& cat)
{
    if(this == &cat)
        return *this;

    type = cat.type;

    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow~" << std::endl;
}