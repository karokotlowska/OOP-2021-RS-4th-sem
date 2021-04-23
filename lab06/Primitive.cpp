#include <iostream>
#include "../include/Primitive.h"

void Primitive::PrintWithValue()const{
  this->PrintEach();
  std::cout<<" = "<<this->getres()<<"\n";
}

void Primitive::PrintEach()const{
  std::cout<<_x;
}

void Primitive::Set(const double k){
  _x=k;
}