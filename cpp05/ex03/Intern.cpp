#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(const Intern& i)
{
    static_cast<void>(i);
    std::cout << "Intern Copy constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& i)
{
    std::cout << "Intern Assignment called" << std::endl;
    static_cast<void>(i);
    return *this;
}

const char* Intern::InvalidTypeException::what() const throw()
{
    return "Invalid Form Type";
}

Form* Intern::makeSForm(const std::string& target)
{
    Form* ret = new ShrubberyCreationForm(target);

    return ret;
}

Form* Intern::makeRForm(const std::string& target)
{
    Form* ret = new RobotomyRequestForm(target);

    return ret;
}

Form* Intern::makePForm(const std::string& target)
{
    Form* ret = new PresidentialPardonForm(target);

    return ret;
}

Form* Intern::makeForm(const std::string form, const std::string target)
{
    Form* ret = NULL;
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form*(Intern::*func_ptr[3])(const std::string&) = {&Intern::makeSForm, &Intern::makeRForm, &Intern::makePForm};
    try
    {
        for(int i = 0; i < 3; ++i)
        {
            if(forms[i] == form)
            {
                ret = (this->*func_ptr[i])(target);
                std::cout << "Intern creates " << *ret << std::endl;
                return ret;
            }
        }
        throw InvalidTypeException();
    }
    catch(std::exception& e)
    {
        std::cerr << "Intern couldn't create form, because " << e.what() << std::endl;
    }
    return NULL;
}