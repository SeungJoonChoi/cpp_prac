#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Form f("Form1", 100, 100);
        std::cout << f << std::endl;
        Bureaucrat b("seunchoi", 10);
        b.signForm(f);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}