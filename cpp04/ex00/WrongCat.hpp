#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const std::string name);
    WrongCat(const WrongCat& cat);
    virtual ~WrongCat();
    WrongCat& operator=(const WrongCat& cat);

    void makeSound() const;
};

#endif