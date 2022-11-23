#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string& name_in);
    ShrubberyCreationForm(const ShrubberyCreationForm& s);
    virtual ~ShrubberyCreationForm();

    class FileOpenFailException : public std::exception
    {
    public:
        const char* what() const throw();
    };
    void execute(Bureaucrat const & executor) const;
};

#endif