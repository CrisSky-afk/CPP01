#include "Harl.hpp"

int main ()
{
    Harl harls;

    harls.complain("DEBUG");
    harls.complain("INFO");
    harls.complain("WARNING");
    harls.complain("ERROR");
    harls.complain("Invalid");
    return 0;
}