#include "Fixed.hpp"

Fixed::Fixed()
: raw_bits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
: raw_bits(i * (1 << f_bit))
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

//Assignment
Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if(this == &fixed)
        return *this;

    raw_bits = fixed.raw_bits;

    return *this;
}

//Comparison
bool Fixed::operator>(const Fixed &f2) const
{
    return this->raw_bits > f2.raw_bits;
}

bool Fixed::operator<(const Fixed &f2) const
{
    return this->raw_bits < f2.raw_bits;
}

bool Fixed::operator>=(const Fixed &f2) const
{
    return this->raw_bits >= f2.raw_bits;
}

bool Fixed::operator<=(const Fixed &f2) const
{
    return this->raw_bits <= f2.raw_bits;
}

bool Fixed::operator==(const Fixed &f2) const
{
    return this->raw_bits == f2.raw_bits;
}

bool Fixed::operator!=(const Fixed &f2) const
{
    return this->raw_bits != f2.raw_bits;
}

//Binary Arithmetic
Fixed Fixed::operator+(const Fixed &f2) const
{
    return Fixed(this->toFloat() + f2.toFloat());
}

Fixed Fixed::operator-(const Fixed &f2) const
{
    return Fixed(this->toFloat() - f2.toFloat());
}

Fixed Fixed::operator*(const Fixed &f2) const
{
    return Fixed(this->toFloat() * f2.toFloat());
}

Fixed Fixed::operator/(const Fixed &f2) const
{
    return Fixed(this->toFloat() / f2.toFloat());
}

//Prefix
Fixed& Fixed::operator++(void)
{
    ++raw_bits;
    return *this;
}

Fixed& Fixed::operator--(void)
{
    --raw_bits;
    return *this;
}
//Postfix - need dummy parameter
Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(*this);
    // ++raw_bits; //OK
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(raw_bits);
    --(*this); // use prefix overloarding
    // ++raw_bits; //OK
    return temp;
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

//min() / max()
Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 < f2)
        return (f1);
    else
        return (f2);
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1 < f2)
        return (f1);
    else
        return (f2);
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    else
        return (f2);
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    else
        return (f2);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();

    return out;
}