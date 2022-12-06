#include <iostream>
#include <Array.hpp>

#define MAX_VAL 100
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    srand(static_cast<unsigned int>(time(NULL)));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
    }
    {
        const Array<int> tmp = numbers;
        const Array<int> test(tmp);

        std::cout << numbers[10] << std::endl;
        std::cout << tmp[10] << std::endl;
        std::cout << test[10] << std::endl;

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (test[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        std::cout << "same value!!" << std::endl;

        //subscript operator can not modify const value
        //tmp[10] = 10;
        //test[10] = 10;

        numbers[10] = 42;
        std::cout << "numbers[10] : " << numbers[10] << std::endl;
    }

    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}