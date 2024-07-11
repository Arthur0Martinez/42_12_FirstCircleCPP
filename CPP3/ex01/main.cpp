#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap    Test("Test");
    ScavTrap    st("ST-1");

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

    std::cout << std::endl;
    st.attack("enemy 1");
    st.takeDamage(4);
    st.beRepaired(4);
    st.takeDamage(9);
    st.attack("enemy 2");
    st.takeDamage(1);
    st.attack("enemy 3");
    st.beRepaired(10);
    st.guardGate();

    st.attack("enemy 4");
    st.attack("enemy 5");
    st.attack("enemy 6");
    st.attack("enemy 7");
    st.takeDamage(900);
    st.attack("enemy 8");
    st.attack("enemy 9");
    st.guardGate();
    std::cout << std::endl;
    return 0;
}