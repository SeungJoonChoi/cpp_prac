#include "Bureaucrat.hpp"

int main()
{
    // try
    // {
    //     Bureaucrat a("seunchoi", 1);
    //     a.increaseGrade();
    //     std::cout << a << std::endl;
    // }
    // catch(std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    Form a("Form1", 100, 100);
    Bureaucrat b("seunchoi", 130);
    b.signForm(a);
    
    
    return 0;
}