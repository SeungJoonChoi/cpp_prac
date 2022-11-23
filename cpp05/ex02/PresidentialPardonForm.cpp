#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: Form("unknown", 25, 5)
{
    std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& name_in)
: Form(name_in, 25, 5)
{
    std::cout << "PresidentialPardonForm Parameterized constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& p)
: Form(p.getName(), p.getSignGrade(), p.getExecGrade())
{
    std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& p)
{
    std::cout << "PresidentialPardonForm Assignment called" << std::endl;
    
    if(this == &p)
        return *this;
    
    Form::operator=(p);
    
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    executable(executor);
    std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}