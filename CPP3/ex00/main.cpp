#include "ClapTrap.hpp"


int main()
{
    ClapTrap    Test("ClapTest");
    ClapTrap    Test2("ClapTest2");
    ClapTrap    Test3(Test);

    std::cout << std::endl;
    Test.attack("enemy 1");
    Test.takeDamage(4);
    Test.beRepaired(4);
    Test.takeDamage(9);
    Test.attack("enemy 2");
    Test.takeDamage(1);
    Test.attack("enemy 3");
    Test.beRepaired(10);

    Test.attack("enemy 4");
    Test.attack("enemy 5");
    Test.attack("enemy 6");
    Test.attack("enemy 7");
    Test.attack("enemy 8");
    Test.attack("enemy 9");
    std::cout << std::endl;
    Test = Test2;

    Test.attack("enemy 1");
    Test.takeDamage(4);
    Test.beRepaired(4);
    Test.takeDamage(9);
    Test.attack("enemy 2");
    Test.takeDamage(1);
    Test.attack("enemy 3");
    Test.beRepaired(10);

    Test.attack("enemy 4");
    Test.attack("enemy 5");
    Test.attack("enemy 6");
    Test.attack("enemy 7");
    Test.attack("enemy 8");
    Test.attack("enemy 9");
    std::cout << std::endl;

    Test3.attack("enemy 1");
    Test3.takeDamage(4);
    Test3.beRepaired(4);
    Test3.takeDamage(9);
    Test3.attack("enemy 2");
    Test3.takeDamage(1);
    Test3.attack("enemy 3");
    Test3.beRepaired(10);

    Test3.attack("enemy 4");
    Test3.attack("enemy 5");
    Test3.attack("enemy 6");
    Test3.attack("enemy 7");
    Test3.attack("enemy 8");
    Test3.attack("enemy 9");
    std::cout << std::endl;

    return 0;
}