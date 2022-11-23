#include "Intern.hpp"

int main()
{
    Intern i;
    Form* f;
    Bureaucrat b("seunchoi", 3);

    std::cout << b << std::endl;
    f = i.makeForm("presidential pardon", "seunchoi");
    if(f)
    {
        b.signForm(*f);
        b.executeForm(*f);

        delete f;
    }

    return 0;
}