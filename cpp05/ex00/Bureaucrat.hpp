#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
private:
    const std::string name;
    unsigned int grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string name_in, const unsigned int grade_in);
    Bureaucrat(const Bureaucrat& b);
    ~Bureaucrat();
    Bureaucrat& operator=(const Bureaucrat& b);

    class GradeTooHighException : std::exception
    {
    public:
        const char* what() const noexcept override;
        //noexcept C++11 ???
    };
    class GradeTooLowException : std::exception
    {
    public:
        const char * what() const noexcept override;
    };

    std::string& getName(void) const;
    unsigned int& getGrade(void) const;
    void increaseGrade(void);
    void decreaseGrade(void);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);

#endif