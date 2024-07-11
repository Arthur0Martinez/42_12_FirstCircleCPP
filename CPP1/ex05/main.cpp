#include "Harl.hpp"

int main()
{
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("DEBUG");
    harl.complain("DEBUG");
    harl.complain("DEBUT");
    harl.complain("ERROR");
    harl.complain("DEBUG");
    harl.complain("WARNING");
    harl.complain("WARNING");
    harl.complain("blabla");
    harl.complain("ERROR");
    return 0;
}