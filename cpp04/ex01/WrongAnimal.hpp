#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const std::string name);
    WrongAnimal(const WrongAnimal& animal);
    virtual ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal& animal);

    void makeSound() const;
    const std::string& getType(void) const;
};

#endif