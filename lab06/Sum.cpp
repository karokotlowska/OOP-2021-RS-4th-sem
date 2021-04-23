#include <iostream>
#include "../include/Sum.h"

Sum::Sum(Primitive &p1,Primitive &p2):_p1(p1),_p2(p2){}

void Sum::PrintEach()const{
  std::cout<<"("; _p1.PrintEach(); std::cout<<"+"; _p2.PrintEach();std::cout<<")";
}

double Sum::getres()const{
  return _p1.getres()+_p2.getres();
}