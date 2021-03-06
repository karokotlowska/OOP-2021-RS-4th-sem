#pragma once
#include "Figura.h"

class Kwadrat: public Figura{
public:
  Kwadrat(const int b):_b(b){};
  void wypisz(std::ostream &o) const;
  double polePow()const{return _b*_b;};
private:
  int _b;
};