#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    bool _signed;
    const int _signGrade;
    const int _execGrade;
public:
    Form();
    Form(const Form& f);
    Form(const std::string& name_in, const int& signGrade_in, const int& execGrade_in);
    ~Form();
    Form& operator=(const Form& f);

    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char* what() const throw();
    };

    const std::string& getName() const;
    const bool& getSigned() const;
    const int& getSignGrade() const;
    const int& getExecGrade() const;

    void beSigned(const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& out, const Form& f);

#endif