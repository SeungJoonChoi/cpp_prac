#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        ShrubberyCreationForm f("F1");
        std::cout << f << std::endl;
        Bureaucrat b("B1", 137);
        b.signForm(f);
        b.executeForm(f);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        RobotomyRequestForm f("F2");
        std::cout << f << std::endl;
        Bureaucrat b("B2", 45);
        b.signForm(f);
        b.executeForm(f);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        PresidentialPardonForm f("F3");
        std::cout << f << std::endl;
        Bureaucrat b("B3", 5);
        b.signForm(f);
        b.executeForm(f);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}