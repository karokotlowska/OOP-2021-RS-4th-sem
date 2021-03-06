#pragma once
#include "Figura.h"
#include <cmath>

class Trojkat: public Figura{
public:
  Trojkat(const int b1, const int b2, const int b3):_b1(b1),_b2(b2),_b3(b3){};
  void wypisz(std::ostream &o) const;
  double polePow()const{double x = (_b1 + _b2 + _b2)/2;
    return sqrt( x * (x-_b1) * (x-_b2) * (x-_b3) );};
private:
  int _b1;
  int _b2;
  int _b3;
};