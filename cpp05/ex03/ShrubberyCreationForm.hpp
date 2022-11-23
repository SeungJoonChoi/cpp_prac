#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string& name_in);
    ShrubberyCreationForm(const ShrubberyCreationForm& s);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& s);

    class FileOpenFailException : public std::exception
    {
    public:
        const char* what() const throw();
    };
    void execute(Bureaucrat const & executor) const;
};

#endif