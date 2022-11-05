#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int raw_bits;
    static const int f_bit = 8;
public:
    Fixed()
    : raw_bits(0)
    {
        std::cout << "Default constructor called" << std::endl;
    }

    Fixed(const int i)
    : raw_bits(i * (1 << f_bit))
    {
        std::cout << "Int constructor called" << std::endl;
    }

    Fixed(const float f)
    : raw_bits(roundf(f * (1 << f_bit)))
    {
        std::cout << "Float constructor called" << std::endl;
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

    //Assignment
    Fixed& operator=(const Fixed& fixed)
    {
        std::cout << "Copy assignment operator called" << std::endl;

        if(this == &fixed)
            return *this;

        raw_bits = fixed.raw_bits;

        return *this;
    }

    //Comparison
    bool operator>(const Fixed &f2) const
    {
        return this->raw_bits > f2.raw_bits;
    }

    bool operator<(const Fixed &f2) const
    {
        return this->raw_bits < f2.raw_bits;
    }

    bool operator>=(const Fixed &f2) const
    {
        return this->raw_bits >= f2.raw_bits;
    }

    bool operator<=(const Fixed &f2) const
    {
        return this->raw_bits <= f2.raw_bits;
    }

    bool operator==(const Fixed &f2) const
    {
        return this->raw_bits == f2.raw_bits;
    }

    bool operator!=(const Fixed &f2) const
    {
        return this->raw_bits != f2.raw_bits;
    }

    //Binary Arithmetic
    Fixed operator+(const Fixed &f2) const
    {
        return Fixed(this->toFloat() + f2.toFloat());
    }

    Fixed operator-(const Fixed &f2) const
    {
        return Fixed(this->toFloat() - f2.toFloat());
    }

    Fixed operator*(const Fixed &f2) const
    {
        return Fixed(this->toFloat() * f2.toFloat());
    }

    Fixed operator/(const Fixed &f2) const
    {
        return Fixed(this->toFloat() / f2.toFloat());
    }
    
    //Prefix
    Fixed& operator++(void)
    {
        ++raw_bits;
        return *this;
    }

    Fixed& operator--(void)
    {
        --raw_bits;
        return *this;
    }
    //Postfix - need dummy parameter
    Fixed operator++(int)
    {
        Fixed temp(*this);
        ++(*this);
        // ++raw_bits; //OK
        return temp;
    }

    Fixed operator--(int)
    {
        Fixed temp(raw_bits);
        --(*this); // use prefix overloarding
        // ++raw_bits; //OK
        return temp;
    }

    int getRawBits(void) const
    {
        return raw_bits;
    }

    void setRawBits(int const raw)
    {
        raw_bits = raw;
    }

    float toFloat(void) const
    {
        return (float)raw_bits / (float)(1 << f_bit);
    }

    int toInt(void) const
    {
        return raw_bits >> f_bit;
    }

    //min() / max()
    static Fixed& min(Fixed &f1, Fixed &f2)
    {
        if (f1 < f2)
            return (f1);
        else
            return (f2);
    }

    static const Fixed& min(const Fixed &f1, const Fixed &f2)
    {
        if (f1 < f2)
            return (f1);
        else
            return (f2);
    }

    static Fixed& max(Fixed &f1, Fixed &f2)
    {
        if (f1 > f2)
            return (f1);
        else
            return (f2);
    }

    static const Fixed& max(const Fixed &f1, const Fixed &f2)
    {
        if (f1 > f2)
            return (f1);
        else
            return (f2);
    }
};

//Input/Output stream
std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();

    return out;
}

#endif