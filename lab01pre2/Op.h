#pragma once
#include "Fun.h"

class Op1{
public:
  virtual float w(const float x)const=0;
  Op1 *z(Fun* fun){
    _fun=fun;
    return this;
  }
  Fun *_fun;
};