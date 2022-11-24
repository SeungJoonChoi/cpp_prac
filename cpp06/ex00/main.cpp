#include "Convert.hpp"

int main()
{
    try
    {
        Convert a("0");
        a.print();
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}