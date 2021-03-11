#include "../include/W.h"
#include <iostream>
#include <utility>
#include <cmath>

W::W(const int k){
  _size=k;
  _v=new double[k];
  for(int i=0;i<_size;i++){
    _v[i]=0;
  }
}

W::W(W &&w):_v(std::exchange(w._v,nullptr)),_size(std::exchange(w._size,0)){}

W::~W(){
  delete []_v;
}

W::W(const W &w):W(w._size){
  for(int i=0;i<w._size;i++){
    _v[i]=w._v[i];
  }
}

double &W::at(const int k)const{
  return _v[k];
}

double W::dot(const W &w1,const W &w2){
  if(w1._size!=w2._size){
   std::cout<<"Error, vectors of different dimensions!"<<std::endl;
   return 0;
  }
  else{
    double sum=0;
    for (int i=0;i<w1._size;i++){
      sum+=w1._v[i]*w2._v[i];
    }
    return sum;
  }
}

void W::print(const char *t)const{
  std::cout<<t<<"[";
  int i;
  for(i=0;i<_size-1;i++){
    std::cout<<_v[i]<<", ";
  }
  std::cout<<_v[i]<<"]\n";
}

W::operator double()const{
  double n=0;
  for (int i=0;i<_size;i++){
      n+=_v[i]*_v[i];
    }
    return sqrt(n);
}

double W::norm()const{
  double n=0;
  for (int i=0;i<_size;i++){
      n+=_v[i]*_v[i];
    }
    return sqrt(n);
}


W W::operator+=(const W &w1){
  for (int i=0;i<_size;i++){
      _v[i]+=w1._v[i];
    }
    return *this;
}

W W::operator+=(const int k){
  for (int i=0;i<_size;i++){
      _v[i]+=+k;
    }
    return *this;
}