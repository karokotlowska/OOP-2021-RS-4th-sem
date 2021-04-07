#pragma once
#include "Figura.h"
#include <iostream>
#include <cmath>

class Trojkat:public Figura{
public:
  Trojkat(int x, int y, int z):_x(x),_y(y),_z(z){}
  void print()const override{
  }
   double pole()const override{
    double x=((_x+_y+_z)/2);
    return sqrt(x*(x-_x)*(x-_y)*(x-_z));
  }
  void wypisz(std::ostream& s) const override {
    s << "Trojkat o bokach: ";
    s<<_x<<_y<<_z;
    s << std::endl;
  }
private:
  double _x,_y,_z;
};