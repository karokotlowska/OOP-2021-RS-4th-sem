#include <iostream>
#include "../include/Ratio.h"

Ratio::Ratio(Primitive &p1,Primitive &p2):_p1(p1),_p2(p2){}

void Ratio::PrintEach()const{
  std::cout<<"("; _p1.PrintEach(); std::cout<<"/"; _p2.PrintEach();std::cout<<")";
}

double Ratio::getres()const{
  return _p1.getres()/_p2.getres();
}