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
    Fixed();
    Fixed(const int i);
    Fixed(const float f);
    Fixed(const Fixed &fixed);
    ~Fixed();

    //Assignment
    Fixed& operator=(const Fixed& fixed);

    //Comparison
    bool operator>(const Fixed &f2) const;
    bool operator<(const Fixed &f2) const;
    bool operator>=(const Fixed &f2) const;
    bool operator<=(const Fixed &f2) const;
    bool operator==(const Fixed &f2) const;
    bool operator!=(const Fixed &f2) const;

    //Binary Arithmetic
    Fixed operator+(const Fixed &f2) const;
    Fixed operator-(const Fixed &f2) const;
    Fixed operator*(const Fixed &f2) const;
    Fixed operator/(const Fixed &f2) const;

    //Prefix
    Fixed& operator++(void);
    Fixed& operator--(void);

    //Postfix - need dummy parameter
    Fixed operator++(int);
    Fixed operator--(int);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    //min() / max()
    static Fixed& min(Fixed &f1, Fixed &f2);
    static const Fixed& min(const Fixed &f1, const Fixed &f2);
    static Fixed& max(Fixed &f1, Fixed &f2);
    static const Fixed& max(const Fixed &f1, const Fixed &f2);
};

//Input/Output stream
std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif