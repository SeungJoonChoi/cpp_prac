#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
: _name("unknown"), _grade(150)
{
    std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name_in, const unsigned int grade_in)
: _name(name_in), _grade(grade_in)
{
    std::cout << "Bureaucrat Parameterized constructor called" << std::endl;
    if(_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& b)
: _name(b._name), _grade(b._grade)
{
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
    std::cout << "Bureaucrat Assignment called" << std::endl;
    if(this == &b)
        return *this;

    *(const_cast<std::string*>(&_name)) = b._name;
    _grade = b._grade;
    return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Too High Grade";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Too Low Grade";
}

const std::string& Bureaucrat::getName(void) const
{
    return _name;
}

const int& Bureaucrat::getGrade(void) const
{
    return _grade;
}

void Bureaucrat::increaseGrade(void)
{
    _grade--;
    if(_grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::decreaseGrade(void)
{
    _grade++;
    if(_grade > 150)
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    
    return out;
}