#include "Form.hpp"

Form::Form()
: _name("unknown"), _signed(false), _signGrade(1), _executeGrade(1)
{
    std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(const std::string& name_in, const int& signGrade_in, const int& executeGrade_in)
: _name(name_in), _signed(false), _signGrade(signGrade_in), _executeGrade(executeGrade_in)
{
    std::cout << "Form Parameterized constructor called" << std::endl;
    if(_signGrade < 1 || _executeGrade < 1)
        throw GradeTooHighException();
    else if (_signGrade > 150 || _executeGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& f)
: _name("unknown"), _signed(false), _signGrade(1), _executeGrade(1)
{
    std::cout << "Form Copy constructor called" << std::endl;
    *(const_cast<std::string*>(&_name)) = f._name;
    _signed = f._signed;
    *(const_cast<int*>(&_signGrade)) = f._signGrade;
    *(const_cast<int*>(&_executeGrade)) = f._executeGrade;
}

Form::~Form()
{
    std::cout << "Form Destructor called" << std::endl;
}

Form& Form::operator=(const Form& f)
{
    std::cout << "Form Assignment called" << std::endl;

    if(this == &f)
        return *this;

    *(const_cast<std::string*>(&_name)) = f._name;
    _signed = f._signed;
    *(const_cast<int*>(&_signGrade)) = f._signGrade;
    *(const_cast<int*>(&_executeGrade)) = f._executeGrade;

    return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Too High Grade";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Too Low Grade";
}

const std::string& Form::getName() const
{
    return _name;
}

const bool& Form::getSigned() const
{
    return _signed;
}

const int& Form::getSignGrade() const
{
    return _signGrade;
}
const int& Form::getExecuteGrade() const
{
    return _executeGrade;
}

void Form::beSigned(const Bureaucrat& b)
{
    if(b.getGrade() <= _signGrade)
        _signed = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const Form& f)
{
    out << "Name : " << f.getName() \
    << std::boolalpha << ", Signed : " << f.getSigned() \
    << ", Sign Grade : " << f.getSignGrade() \
    << ", Execute Grade : " << f.getExecuteGrade();

    return out;
}