#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string& name_in);
    PresidentialPardonForm(const PresidentialPardonForm& p);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm& operator=(const PresidentialPardonForm& s);

    void execute(Bureaucrat const & executor) const;
};

#endif

// • PresidentialPardonForm: Required grades: sign 25, exec 5
// Informs that <target> has been pardoned by Zaphod Beeblebrox.