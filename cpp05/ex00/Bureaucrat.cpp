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

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
    std::cout << "Bureaucrat Assignment called" << std::endl;
    if(this == &b)
        return *this;

    //name = b.name - casting ??

    grade = b.grade;
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
    return name;
}

const int& Bureaucrat::getGrade(void) const
{
    return grade;
}

void Bureaucrat::increaseGrade(void)
{
    grade--;
    if(grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::decreaseGrade(void)
{
    grade++;
    if(grade > 150)
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    
    return out;
}