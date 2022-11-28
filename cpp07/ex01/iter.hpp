#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void iter(T* arr, int size, void(*func_ptr)(T&))
{
    for(int i = 0; i < size; ++i)
    {
        func_ptr(arr[i]);
    }
}

#endif