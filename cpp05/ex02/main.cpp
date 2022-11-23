#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        PresidentialPardonForm f("home");
        std::cout << f << std::endl;
        Bureaucrat b("seunchoi", 2);
        b.signForm(f);
        b.executeForm(f);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}