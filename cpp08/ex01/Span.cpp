#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N)
{
    _v.reserve(N);
}

Span::Span(const Span& s)
: _v(s._v)
{
}

Span::~Span()
{
}

Span& Span::operator=(const Span& s)
{
    if(this == &s)
        return *this;

    _v = s._v;

    return *this;
}

const char* Span::FullSizeException::what() const throw()
{
    return "Stack is Full";
}

const char* Span::NumberElementException::what() const throw()
{
    return "Invalid Number of Elements";
}

const char* Span::OutRangeException::what() const throw()
{
    return "Index Out of Range";
}

int& Span::operator[](const int index)
{
    if(index < 0 || index >= static_cast<int>(_v.size()))
        throw OutRangeException();
    return _v[index]; 
}

const int& Span::operator[](const int index) const
{
    if(index < 0 || index >= static_cast<int>(_v.size()))
        throw OutRangeException();
    return _v[index];
}

void Span::addNumber(int n)
{
    if(_v.size() != _v.capacity())
        _v.push_back(n);
    else
        throw FullSizeException();
}

int Span::shortestSpan()
{
    if(_v.size() < 2)
        throw NumberElementException();

    std::vector<int> temp(_v);
    std::sort(temp.begin(), temp.end());
    std::adjacent_difference(temp.begin(), temp.end(), temp.begin());

    return *std::min_element(temp.begin(), temp.end());
}

int Span::longestSpan()
{
    return *std::max_element(_v.begin(), _v.end()) - *std::min_element(_v.begin(), _v.end());
}