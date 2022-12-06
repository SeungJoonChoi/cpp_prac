#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <numeric>
#include <exception>

class Span
{
private:
    std::vector<int> _v;
public:
    Span();
    Span(unsigned int N);
    Span(const Span& s);
    ~Span();
    Span& operator=(const Span& s);

    class FullSizeException : public std::exception
    {
    public:
        const char* what() const throw();
    };

    class NumberElementException : public std::exception
    {
    public:
        const char* what() const throw();
    };

    class OutRangeException : public std::exception
    {
    public:
        const char* what() const throw();
    };

    int& operator[](const int index);
    const int& operator[](const int index) const;
    void addNumber(int n);
    int shortestSpan();
    int longestSpan();

    template<typename T>
    void addRange(T first, T last)
    {
        if(std::distance(first, last) > static_cast<long>(_v.capacity() - _v.size()))
            throw FullSizeException();
        else
        {
            while(first != last)
            {
                _v.push_back(*first);
                ++first;
            }
        }
    }
};

#endif