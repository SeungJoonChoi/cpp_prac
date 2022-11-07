#include "Fixed.hpp"

Fixed::Fixed()
: raw_bits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
: raw_bits(n * (1 << f_bit))
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
: raw_bits(roundf(f * (1 << f_bit)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if(this == &fixed)
        return *this;

    raw_bits = fixed.raw_bits;

    return *this;
}

int Fixed::getRawBits(void) const
{
    return raw_bits;
}

void Fixed::setRawBits(int const raw)
{
    raw_bits = raw;
}

float Fixed::toFloat(void) const
{
    return (float)raw_bits / (float)(1 << f_bit);
}

int Fixed::toInt(void) const
{
    return raw_bits >> f_bit;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << (float)fixed.getRawBits() / (float)(1 << 8);

    return out;
}