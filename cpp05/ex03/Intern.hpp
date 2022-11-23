#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern& i);
    ~Intern();
    Intern& operator=(const Intern& i);

    class InvalidTypeException : public std::exception
    {
    public:
        const char* what() const throw();
    };

    Form* makeSForm(const std::string& target);
    Form* makeRForm(const std::string& target);
    Form* makePForm(const std::string& target);
    Form* makeForm(const std::string form, const std::string target);
};

#endif