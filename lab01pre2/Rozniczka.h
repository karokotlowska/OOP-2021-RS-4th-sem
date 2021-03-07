#pragma once
#include <cmath>
class ProstaRozniczka: public Op1{
public:
  ProstaRozniczka(const float x):_krok(x){};
  float w(const float x)const{return (round((_fun->wartosc(x + _krok)-_fun->wartosc(x - _krok))/(2*_krok)*100000)/100000);}
private:
  float _krok;
};