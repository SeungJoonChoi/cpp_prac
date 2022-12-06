#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& data, const int& to_find)
{
    return std::find(data.begin(), data.end(), to_find);
}

#endif