#pragma once
#include <iostream>

class Figura{
public:
  static void wypisz(const Figura &f){
    f.wypisz(std::cout);
  }
  virtual ~Figura()=default;
  virtual void print()const=0;
  virtual void wypisz(std::ostream& s)const=0;
  virtual double pole()const=0;
  virtual double polePow()const{
    return this->pole();
  }
private:
};
