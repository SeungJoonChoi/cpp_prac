#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int value;
    static const int f_bit = 8;
public:
    Fixed()
    : value(0)
    {
        std::cout << "Default constructor called" << std::endl;
    }

    Fixed(const Fixed &fixed)
    {
        std::cout << "Copy constructor called" << std::endl;
        *this = fixed;
    }

    ~Fixed()
    {
        std::cout << "Destructor called" << std::endl;
    }

    Fixed& operator=(const Fixed& fixed)
    {
        std::cout << "Copy assignment operator called" << std::endl;

        if(this == &fixed)
            return *this;

        value = fixed.getRawBits();

        return *this;
    }

    int getRawBits(void) const
    {
        std::cout << "getRawBits member function called" << std::endl;
        return value;
    }

    void setRawBits(int const raw)
    {
        std::cout << "setRawBits member function called" << std::endl;
        value = raw;
    }
};

#endif