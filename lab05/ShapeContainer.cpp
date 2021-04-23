#include "../include/ShapeContainer.h"

void ShapeContainer::operator+=(Shape2D *s){
  _kontener.push_back(s);
}

std::ostream &operator<<(std::ostream &s, const ShapeContainer &v){
  s<<"W kontenerze znajduja sie:\n";
  for(int i=0;i<v.size();i++){
    s<<*v[i];
  }
  return s;
}

int ShapeContainer::size()const{
  return _kontener.size();
}

Shape2D* ShapeContainer::operator[](unsigned i)const{
  return _kontener[i];
}