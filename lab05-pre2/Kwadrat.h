#pragma once
#include "Figura.h"
#include <iostream>

class Kwadrat:public Figura{
public:
  Kwadrat(int x):_x(x){}
  void print()const override{
    
  }
   double pole()const override{
    return _x*_x;
  }
  void wypisz(std::ostream& s) const override {
      s << "Kwadrat o boku: " << _x << std::endl;
    }
private:
  int _x;
};