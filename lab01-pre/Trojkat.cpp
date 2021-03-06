#include "Trojkat.h"
#include <iostream>

void Trojkat::wypisz(std::ostream &o) const
    { std::cout << "Trojkat o bokach: " << _b1 << " " << _b2 << " " << _b3 << std::endl; }