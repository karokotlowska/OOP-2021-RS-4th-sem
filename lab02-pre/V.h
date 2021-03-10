#pragma once
#include <cmath>
#include <iostream>


class V{
  public:
    explicit V(const int k);
    V(){}
    V(const V &k);
    //V(V &&k);
    ~V();
    double &at(const int k)const;
    void print(const char *t)const;
    static double dot(const V &v1,const V &v2);
    double norm() const;

    V(std::initializer_list<double> v);

    explicit operator double()const{
      float norma=0;
      for(int i=0;i<_size;i++){
        norma+=_v[i]*_v[i];
      }
      return sqrt(norma);
    }

    static V sum(const V &_v1,const V &_v2){
      V nowe=_v1;
      for(int i=0;i<nowe._size;i++){
        nowe._v[i]=_v1._v[i]+_v2._v[i];
      }
      return nowe;
    }
    static V sum(const V &_v1,const int k){
      V nowe=_v1;
      for(int i=0;i<nowe._size;i++){
        nowe._v[i]=_v1._v[i]+k;
      }
      return nowe;
    }
    V operator+(const V &v1){
      for(int i=0;i<_size;i++){
        _v[i]+=v1._v[i];
      }
      return *this;
    }
    V operator+(const int k){
      for(int i=0;i<_size;i++){
        _v[i]+=k;
      }
      return *this;
    }
    int getsize()const{
      return _size;
    }
    double get(const int k)const{
        return _v[k];
    }

    static V from_costam(const double k,const int p){
      V nowy(p);
      for(int i=0;i<p;i++) {
        nowy._v[i]=k;
      }
      return nowy;
    }
  private:
    double *_v;
    int _size;
    
};


V operator+(const int k,const V &v1);
V operator*(const int k, const V &v1);
