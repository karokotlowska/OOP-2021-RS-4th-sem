#pragma once
#include <iostream>
#include "Wrapper.h"
class IntWrapper:public Wrapper{
public:
   IntWrapper(int k):_i(k){};
   std::ostream& print() const override;
   ~IntWrapper() = default;
   virtual Wrapper* clone() const override{
    return new IntWrapper(_i);
  }
private:
  int _i;
};

std::ostream& IntWrapper::print() const {
	return std::cout << _i << " ";
}