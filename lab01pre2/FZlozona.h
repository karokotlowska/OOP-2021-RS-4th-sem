#pragma once
#include "Fun.h"

class FZlozona: public Op1{
public:
  FZlozona(Fun *fun):_fun(fun){}
  float w(const float x)const{return _fun->wartosc(x);};
private:
  Fun *_fun;
};