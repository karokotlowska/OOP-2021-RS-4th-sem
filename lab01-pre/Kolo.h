#pragma once
#include "Figura.h"


class Kolo: public Figura{
public:
  Kolo(const int r):_r(r){};
  void wypisz(std::ostream &o) const;
  double polePow()const{return 3.14*_r*_r;};
private:
  int _r;
};