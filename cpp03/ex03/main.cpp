#include "DiamondTrap.hpp"

int main()
{
    {
        DiamondTrap A("Diamond");
        std::cout << std::endl;

        A.attack("Zombie");
        std::cout << std::endl;

        A.whoAmI();
        std::cout << std::endl;

        A.print();
        std::cout << std::endl;
    }
    {
        std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
        DiamondTrap B("Copy");
        DiamondTrap A(B);
        std::cout << std::endl;

        A.attack("Zombie");
        std::cout << std::endl;

        A.whoAmI();
        std::cout << std::endl;

        A.print();
        std::cout << std::endl;
    }
    {
        std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
        DiamondTrap B("Operator");
        DiamondTrap A;
        A = B;
        std::cout << std::endl;

        A.attack("Zombie");
        std::cout << std::endl;

        A.whoAmI();
        std::cout << std::endl;

        A.print();
        std::cout << std::endl;
    }

    return 0;
}