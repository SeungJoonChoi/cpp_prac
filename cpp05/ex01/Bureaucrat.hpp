#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string name_in, const unsigned int grade_in);
    Bureaucrat(const Bureaucrat& b);
    ~Bureaucrat();
    Bureaucrat& operator=(const Bureaucrat& b);

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

    const std::string& getName(void) const;
    const int& getGrade(void) const;
    void increaseGrade(void);
    void decreaseGrade(void);

    void signForm(Form& f) const;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);

#endif