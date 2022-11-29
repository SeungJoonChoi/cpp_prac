#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template<typename T>
class Array
{
private:
    T* _arr;
    size_t _size;
public:
    class AllocFailException : public std::exception
    {
    public:
        const char* what() const throw()
        {
            return "Allocation Failed";
        }
    };

    class OutRangeException : public std::exception
    {
    public:
        const char* what() const throw()
        {
            return "Index Out of Range";
        }
    };

    Array()
    : _arr(nullptr), _size(0)
    {
    }

    Array(unsigned int n) //prevent alloc fail - exit()
    : _arr(nullptr), _size(n)
    {
        _arr = new T[_size];
        if(_arr == nullptr)
            throw AllocFailException();
    }

    Array(const Array& a)
    : _arr(nullptr), _size(a._size)
    {
        if(a._arr != nullptr)
        {
            _arr = new T[_size];
            if(_arr == nullptr)
                throw AllocFailException();
            for(int i = 0; i < _size; ++i)
                _arr[i] = a._arr[i];
        }
    }

    //////////////////////
    ~Array();

    Array& operator=(const Array& a)
    {
        if(this == &a)
            return *this;
        
        if(_arr != nullptr)
        {
            delete[] _arr;
            _arr = nullptr;
            _size = 0;
        }

        if(a._arr != nullptr)
        {
            _size = a._size;

            _arr = new T[_size];
            if(_arr == nullptr)
                throw AllocFailException();

            /////////////
        }
    }

    T& operator[](const int index); // throw exception
    size_t size() const;
};

#endif