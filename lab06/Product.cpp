#include <iostream>
#include "../include/Product.h"

Product::Product(Primitive &p1,Primitive &p2):_p1(p1),_p2(p2)/*_res(p1.getx()*p2.getx())*/{}

void Product::PrintEach()const{
  std::cout<<"("; _p1.PrintEach(); std::cout<<"*"; _p2.PrintEach();std::cout<<")";
}

double Product::getres()const{
  return _p1.getres()*_p2.getres();
}