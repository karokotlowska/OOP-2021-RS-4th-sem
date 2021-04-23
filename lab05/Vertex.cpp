#include "../include/Vertex.h"
#include <cmath>

Vertex::Vertex(int x, int y):_x(x),_y(y){}

std::ostream &operator<<(std::ostream &s, const Vertex &v){
  s<<" ["<<v.getx()<<", "<<v.gety()<<"] ";
  return s;
}

int Vertex::getx()const{
  return _x;
}

int Vertex::gety()const{
  return _y;
}

bool Vertex::operator!=(const Vertex &v)const{
  return !(*this==v);
}

bool Vertex::operator==(const Vertex &v)const{
  if(this==&v){
    return true;
  }
  if(v._x==_x&& v._y==_y){
    return true;
  }
  else{
    return false;
  }
}

double Vertex::linia(const Vertex &v)const{
  return sqrt((_x-v._x)*(_x-v._x)*(_y-v._y)*(_y-v._y));
}