#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;
        delete i;
    }
    std::cout << std::endl;
    {
        std::cout << "@@@@@Polymorphism Test@@@@@" << std::endl;
        std::cout << std::endl;
        Animal *meta[6];
        for(int i = 0; i < 6; ++i)
        {
            if(i < 3)
                meta[i] = new Cat;
            else
                meta[i] = new Dog;
        }
        std::cout << std::endl;
        for(int i = 0; i < 6; ++i)
            meta[i]->makeSound();
        std::cout << std::endl;
        for(int i = 0; i < 6; ++i)
            delete meta[i];
    }
    std::cout << std::endl;
    {
        std::cout << "@@@@@Deep Copy Test@@@@@" << std::endl;
        std::cout << std::endl;
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

        cat1.getBrain()->setIdeas("Meow");

        std::cout << "Cat1 Brain" << std::endl;
        cat1.getBrain()->printIdeas();
        std::cout << "Cat2 Brain" << std::endl;
        cat2.getBrain()->printIdeas();
        std::cout << std::endl;
    }

    return 0;
}