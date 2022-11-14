#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const std::string name);
    Animal(const Animal& animal);
    ~Animal();
    Animal& operator=(const Animal& animal);

    virtual void makeSound() const;
    const std::string& getType(void) const;
};

#endif