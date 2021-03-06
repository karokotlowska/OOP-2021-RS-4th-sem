#include "Kolo.h"
#include <iostream>

void Kolo::wypisz(std::ostream &o) const
    { std::cout << "Kolo o promieniu: " << _r << std::endl; }