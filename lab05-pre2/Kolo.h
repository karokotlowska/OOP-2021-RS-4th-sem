#pragma once
#include "Figura.h"
#include <iostream>
#include <cmath>

class Kolo:public Figura{
public:
  Kolo(int r):_r(r){}
  void print()const override{
    
  }
  double pole()const override{
    return (M_PI*_r*_r);
  }
  void wypisz(std::ostream& s)const override{
    s << "Kolo o promieniu: " << _r << std::endl;
  }
private:
  int _r;
};