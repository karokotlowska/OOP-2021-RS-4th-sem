#pragma once
#include <iostream>
#include "Wrapper.h"
class FloatWrapper:public Wrapper{
public:
  FloatWrapper(float k):_f(k){};
   std::ostream& print() const override;
   ~FloatWrapper() = default;
    virtual Wrapper* clone() const override{
    return new FloatWrapper(_f);
  }
private:
  float _f;
};

std::ostream& FloatWrapper::print() const {
	return std::cout << _f << " ";
}