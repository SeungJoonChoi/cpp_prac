#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <exception>
#include <cmath>
#include <iomanip>
#include <limits>

class Convert
{
private:
    std::string _input;
    double _value;

public:
    Convert();
    Convert(const std::string& input_in);
    Convert(const Convert& c);
    ~Convert();
    Convert& operator=(const Convert& c);

    class InvalidInputException : public std::exception
    {
    public:
        const char* what() const throw();
    };

    char toChar();
    int toInt();
    float toFloat();
    double toDouble();

    void print();
};

#endif