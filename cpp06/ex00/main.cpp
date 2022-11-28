#include "Convert.hpp"

int main()
{
    try
    {
        // __INT_MAX__;
        Convert a("3.1415961231234199999");
        a.print();
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}