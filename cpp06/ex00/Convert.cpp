#include "Convert.hpp"

Convert::Convert(const std::string& input_in)
: _input(input_in), _value(0.0)
{
    char *end;

    _value = std::strtod(_input.c_str(), &end);

    if(_value == 0.0 && _input[0] != '+' && _input[0] != '-' && !std::isdigit(_input[0]))
        throw InvalidInputException();
    if(end[0] != 'f' && end[0] != '\0')
        throw InvalidInputException();
}

char Convert::toChar()
{
    return static_cast<char>(_value);
}

int Convert::toInt()
{
    return static_cast<int>(_value);
}

float Convert::toFloat()
{
    return static_cast<float>(_value);
}

double Convert::toDouble()
{
    return _value;
}

void Convert::print()
{
    if(std::isnan(_value) || std::isinf(_value))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
    }
    else
    {
        if(toChar() < 32 || toChar() > 126)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: " << toChar() << std::endl;
        std::cout << "int: " << toInt() << std::endl;
    }
    std::cout << std::showpos << std::setprecision(std::numeric_limits<float>::digits10) << "float: " << toFloat() << "f" << std::endl;
    std::cout << std::setprecision(std::numeric_limits<double>::digits10) << "double: " << toDouble() << std::endl;
}

const char* Convert::InvalidInputException::what() const throw()
{
    return "Invalid Input";
}