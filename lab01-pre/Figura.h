#pragma once
#include <iostream>

class Figura{
public:
  virtual ~Figura(){}
  virtual void wypisz(std::ostream &o) const = 0;
  static void wypisz(const Figura &x)
        { x.wypisz( std::cout ); }

  virtual double polePow()const=0;
};