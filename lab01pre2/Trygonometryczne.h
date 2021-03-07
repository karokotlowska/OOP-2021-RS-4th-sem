#pragma once
#include <cmath>
#include <iostream>

class Sinus: public Fun{
public:
  Sinus():_x(0){}
  float wartosc(const float x)const{return sin(x);}

private:
  float _x;
};