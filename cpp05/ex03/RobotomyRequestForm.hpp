#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string& name_in);
    RobotomyRequestForm(const RobotomyRequestForm& r);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm& operator=(const RobotomyRequestForm& r);

    class RobotomyFailedException : public std::exception
    {
    public:
        const char* what() const throw();
    };

    void execute(Bureaucrat const & executor) const;
};

#endif