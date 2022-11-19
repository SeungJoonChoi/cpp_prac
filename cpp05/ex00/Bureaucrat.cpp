#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
: name("unknown"), grade(150)
{
    std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name_in, const unsigned int grade_in)
: name(name_in), grade(grade_in)
{
    std::cout << "Bureaucrat Parameterized constructor called" << std::endl;
    if(grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& b)
: name(b.name), grade(b.grade)
{
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
}