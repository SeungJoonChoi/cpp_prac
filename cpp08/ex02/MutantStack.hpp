#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <vector>

#include <iostream>

template<typename T>
class MutantStack : public std::stack< T, std::vector<T> >
{
    
// private:
//     std::stack<T> _s;
public:
    void test(void)
    {
        this->c.push_back(0);
        this->c.push_back(1);
        this->c.push_back(2);

        std::cout << this->c.size() << std::endl;
    }
public:
    // typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack< T, std::vector<T> >::container_type::iterator iterator;
    iterator begin()
    {
        return this->c.begin();
    }

    iterator end()
    {
        return this->c.end();
    }
};

#endif