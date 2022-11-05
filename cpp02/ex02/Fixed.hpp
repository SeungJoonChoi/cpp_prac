#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int raw_bits;
    static const int fractional_bit;
public:
    Fixed()
    : raw_bits(0)
    {
    }

    Fixed(const int i)
    : raw_bits(i * (1 << 8))
    {
    }

    Fixed(const float f)
    : raw_bits(roundf(f * (1 << 8)))
    {
    }

    Fixed(const Fixed &fixed)
    {
        *this = fixed;
    }

    ~Fixed()
    {
    }

    Fixed& operator=(const Fixed& fixed)
    {
        if(this == &fixed)
            return *this;

        raw_bits = fixed.raw_bits;

        return *this;
    }

    Fixed operator+(const Fixed &f2)
    {
        return this->toFloat() + f2.toFloat();
    }

    Fixed operator-(const Fixed &f2)
    {
        return this->toFloat() - f2.toFloat();
    }

    Fixed operator*(const Fixed &f2)
    {
        return this->toFloat() * f2.toFloat();
    }

    Fixed operator/(const Fixed &f2)
    {
        return this->toFloat() / f2.toFloat();
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
        return (float)raw_bits / (float)(1 << 8);
    }

    int toInt(void) const
    {
        return raw_bits >> 8;
    }
};

//Input/Output stream
std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << (float)fixed.getRawBits() / (float)(1 << 8);

    return out;
}

const int Fixed::fractional_bit = 8;

#endif