#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("seunchoi", 1);
        a.increaseGrade();
        std::cout << a << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat a("seunchoi", 150);
        a.decreaseGrade();
        std::cout << a << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Bureaucrat a("seunchoi", 0);
        std::cout << a << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat a("seunchoi", 151);
        std::cout << a << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat a("seunchoi", 100);
        a.increaseGrade();
        std::cout << a << std::endl;
        a.decreaseGrade();
        std::cout << a << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}