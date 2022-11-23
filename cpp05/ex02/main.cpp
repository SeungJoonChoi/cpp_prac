#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        RobotomyRequestForm f("home");
        std::cout << f << std::endl;
        Bureaucrat b("seunchoi", 40);
        b.signForm(f);
        b.executeForm(f);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}