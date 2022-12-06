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
    : _arr(NULL), _size(0)
    {
    }

    Array(unsigned int n)
    : _arr(NULL), _size(n)
    {
        _arr = new T[_size];
        if(_arr == NULL)
            throw AllocFailException();
    }

    Array(const Array& a)
    : _arr(NULL), _size(a._size)
    {
        if(a._arr != NULL)
        {
            _arr = new T[_size];
            if(_arr == NULL)
                throw AllocFailException();

            for(int i = 0; i < static_cast<int>(_size); ++i)
                _arr[i] = a._arr[i];
        }
    }

    ~Array()
    {
        if(_arr != NULL)
            delete[] _arr;
    }

    Array& operator=(const Array& a)
    {
        if(this == &a)
            return *this;
        
        if(a._arr != NULL)
        {
            if(_arr != NULL)
            {
                delete[] _arr;
                _arr = NULL;
                _size = 0;
            }

            _size = a._size;

            _arr = new T[_size];
            if(_arr == NULL)
                throw AllocFailException();

            for(int i = 0; i < static_cast<int>(_size); ++i)
                _arr[i] = a._arr[i];
        }
        return *this;
    }

    T& operator[](const int index)
    {
        if(index < 0 || index >= static_cast<int>(_size))
            throw OutRangeException();
        return _arr[index]; 
    }

    const T& operator[](const int index) const
    {
        if(index < 0 || index >= static_cast<int>(_size))
            throw OutRangeException();
        return _arr[index];
    }

    size_t size() const
    {
        return _size;
    }
};

#endif