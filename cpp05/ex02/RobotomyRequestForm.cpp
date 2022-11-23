#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: Form("unknown", 72, 45)
{
    std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& name_in)
: Form(name_in, 72, 45)
{
    std::cout << "RobotomyRequestForm Parameterized constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& r)
: Form(r.getName(), r.getSignGrade(), r.getExecGrade())
{
    std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& r)
{
    std::cout << "RobotomyRequestForm Assignment called" << std::endl;
    
    if(this == &r)
        return *this;
    
    Form::operator=(r);
    
    return *this;
}

const char* RobotomyRequestForm::RobotomyFailedException::what() const throw()
{
    return "Failed To Robotomized";
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    executable(executor);
    std::srand(static_cast<unsigned int>(std::time(0)));
    if(std::rand() % 2)
        std::cout << "drrrrr.... " << getName() << " has been robotomized." << std::endl;
    else
        throw RobotomyFailedException();
}