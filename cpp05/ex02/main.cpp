#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        ShrubberyCreationForm f("home");
        std::cout << f << std::endl;
        Bureaucrat b("seunchoi", 140);
        b.signForm(f);
        b.executeForm(f);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    

    return 0;
}