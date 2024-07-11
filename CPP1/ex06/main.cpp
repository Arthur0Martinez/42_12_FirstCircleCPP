#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "You need to have 1 arguement" << std::endl;
        return 1;
    }
    Harl harl;

    harl.filterComplain(argv[1]);
    return 0;
}