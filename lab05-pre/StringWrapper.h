#pragma once
#include <iostream>
#include "Wrapper.h"
class StringWrapper:public Wrapper{
public:
   StringWrapper(std::string k):_s(k){};
    std::ostream& print() const override;
    ~StringWrapper() = default;
    virtual Wrapper* clone() const override{
    return new StringWrapper(_s);
  }
private:
  std::string _s;
};

std::ostream& StringWrapper::print() const {
	return std::cout << _s << " ";
}