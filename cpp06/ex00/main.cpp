#include "Convert.hpp"

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cerr << "Invalid argument number" << std::endl;
        return 1;
    }

    try
    {
        Convert a(argv[1]);
        a.print();
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}