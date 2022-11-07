#include "MyString.hpp"

MyString::MyString()
{
}

MyString::MyString(std::string source)
: string(source)
{
}

void MyString::replaceAll(std::string &s1, std::string &s2)
{
    size_t pos = 0;

    while(1)
    {
        pos = string.find(s1);
        if (pos == std::string::npos)
            break;
        else
        {
            string.erase(pos, s1.length());
            string.insert(pos, s2);
        }
    }
}

std::string MyString::getString(void) const
{
    return string;
}

void MyString::setString(std::string source)
{
    string = source;
}