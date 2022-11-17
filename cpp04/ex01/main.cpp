#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Cat cat1;
    Cat cat2;

    cat1.getBrain()->setIdeas("Cat");
    cat2 = cat1;

    std::cout << std::endl;
    std::cout << "Cat1 Brain" << std::endl;
    cat1.getBrain()->printIdeas();
    std::cout << "Cat2 Brain" << std::endl;
    cat2.getBrain()->printIdeas();
    std::cout << std::endl;

    cat1.getBrain()->setIdeas("?");

    std::cout << "Cat1 Brain" << std::endl;
    cat1.getBrain()->printIdeas();
    std::cout << "Cat2 Brain" << std::endl;
    cat2.getBrain()->printIdeas();
    std::cout << std::endl;

    return 0;
}