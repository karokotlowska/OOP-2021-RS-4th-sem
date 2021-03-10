#include "../include/V.h"
#include <iostream>
#include <cmath>
#include <initializer_list>
#include <utility>

V::V(const int k=0){
  _v=new double[k];
  _size=k;
  	for(int a = 0; a < _size; a++)
	{
		_v[a] = 0;
	}
}

V::V(const V &k):V(k._size){
  //_size=k._size;
  //_v=new double[_size];
  for(int i=0;i<_size;i++){
    _v[i]=k._v[i];
  }
}
/*
V::V(V &&other):_size(std::exchange(other._size,0)),
  _v(std::exchange(other._v,nullptr)){}
*/
V::~V(){
  delete[]_v;
  _size=0;
}
double &V::at(const int k)const{
  return _v[k];
}

void V::print(const char *t)const{

  std::cout<<t;
  for(int i=0;i<_size;i++){
    std::cout<<_v[i]<<" ";
  }
  std::cout<<"\n";
}

double V::dot(const V &v1,const V &v2){
  if(v1._size!=v2._size){
    std::cout<<"Error, vectors of different dimensions!"<<std::endl;
    return 0;
  }
  else{
    double sum=0;
    for(int i=0;i<v1._size;i++){
      sum+=v1._v[i]*v2._v[i];
    }
    return sum;
  }
}
   
double V::norm() const
{
	double sum = 0;
	for(int a = 0; a < _size; a++)
	{
		sum += _v[a] * _v[a];
	}
	return sqrt(sum);
} 

V operator+(const int k,const V &v1){
  V nowy(v1.getsize());
  for(int i=0;i<v1.getsize();i++){
    nowy.at(i)=v1.get(i)+k;
  }
  return nowy;
}

V operator*(const int k, const V &v1){
  V nowy(v1.getsize());
  for(int i=0;i<v1.getsize();i++){
    nowy.at(i)=v1.get(i)*k;
  }
  return nowy;
}


V::V(std::initializer_list<double>v){
  int j=0;
  _v=new double[v.size()];
  _size=v.size(); //.begin()////.end()
  for(int i :v){
    at(j)=i;
    j++;
  }
}
