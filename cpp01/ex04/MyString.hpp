#ifndef MYSTRING_HPP
#define MYSTRING_HPP

#include <string>

class MyString
{
private:
    std::string string;
public:
    MyString();
    MyString(std::string source);
    void replaceAll(std::string &s1, std::string &s2);
    std::string getString(void) const;
    void setString(std::string source);
};

#endif