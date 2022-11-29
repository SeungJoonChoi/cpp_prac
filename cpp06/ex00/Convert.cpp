#include "Convert.hpp"

Convert::Convert()
: _input("unknown"), _value(0.0)
{
}

Convert::Convert(const std::string& input_in)
: _input(input_in), _value(0.0)
{
    char *end;

    if(input_in.length() == 1 && std::isprint(input_in[0]))
        _value = static_cast<double>(input_in[0]);
    else
    {
        _value = std::strtod(_input.c_str(), &end);

        if(_value == 0.0 && _input[0] != '+' && _input[0] != '-' && !std::isdigit(_input[0]))
            throw InvalidInputException();
        if(end[0] != 'f' && end[0] != '\0')
            throw InvalidInputException();
    }
}

Convert::Convert(const Convert& c)
: _input(c._input), _value(c._value)
{
}

Convert::~Convert()
{
}

Convert& Convert::operator=(const Convert& c)
{
    if(this == &c)
        return *this;

    _input = c._input;
    _input = c._value;

    return *this;
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
        std::cout << std::showpos;
    }
    else
    {
        if(!std::isprint(toChar()))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: " << toChar() << std::endl;
        std::cout << "int: " << toInt() << std::endl;
    }
    if(!(std::isnan(_value) || std::isinf(_value)) && toFloat() == toInt())
        std::cout << std::setprecision(std::numeric_limits<float>::digits10) << "float: " << toFloat() << ".0f" << std::endl;
    else
        std::cout << std::setprecision(std::numeric_limits<float>::digits10) << "float: " << toFloat() << "f" << std::endl;
    if(!(std::isnan(_value) || std::isinf(_value)) && toDouble() == static_cast<long long>(_value))
        std::cout << std::setprecision(std::numeric_limits<double>::digits10) << "double: " << toDouble() << ".0" << std::endl;
    else
        std::cout << std::setprecision(std::numeric_limits<double>::digits10) << "double: " << toDouble() << std::endl;
}

const char* Convert::InvalidInputException::what() const throw()
{
    return "Invalid Input";
}