#pragma once

class Liniowa: public Fun {
public:
  Liniowa():_a(0),_b(0){}
  static Liniowa *utworz(){
    return new Liniowa;
  }
  Liniowa *a(const float f){
    _a=f;
    return this;
  }
  Liniowa *b(const float f){
    _b=f;
    return this;
  }
  float wartosc(const float x)const{return _a*x+_b;}

private:
  float _a;
  float _b;
};



class Kwadratowa: public Fun {
public:
  Kwadratowa():_a(0),_b(0), _c(0){};
  static Kwadratowa *utworz()
  {
    return new Kwadratowa;
  }
  Kwadratowa *a(const float f)
  {
    _a=f;
    return this;
  }
  Kwadratowa *b(const float f)
  {
    _b=f;
    return this;
  }
  Kwadratowa *c(const float f)
  {
    _c=f;
    return this;
  }
  
  float wartosc(const float x)const{return _a*x*x+_b*x+_c;}
  
private:
  float _a;
  float _b;
  float _c;

};