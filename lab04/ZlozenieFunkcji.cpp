#include <iostream>
#include "../include/ZlozenieFunkcji.h"
#include "../include/Funkcje.h"

int ZlozenieFunkcji::size=0;

void ZlozenieFunkcji::insert(std::function<double(const double)> fun){
  _list.push_back(fun);
  size++;
}


double ZlozenieFunkcji::wynik(const double x){
  if(!_res.empty()){
      _res.clear();
  }
  double res=0;
  res=_list[0](x);
  _res.push_back(res);
  for(int i=1;i<size;i++){
    res=_list[i](res);
    _res.push_back(res);
  }
  return res;
}


double ZlozenieFunkcji::operator[](int i){
 return _res[i];
}