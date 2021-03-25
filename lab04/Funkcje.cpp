#include <iostream>
#include "../include/Funkcje.h"
#include <utility>

Sinus::Sinus(const double a, const double b):_a(a),_b(b){}

Liniowa::Liniowa(const double a, const double b):_a(a),_b(b){}

double Sinus::operator()(const double x)const{
  return (sin(_a*x+_b));
}

double Liniowa::operator()(const double x)const{
  return (_a*x+_b);
}

double PierwiastekKwadratowy::operator()(const double x)const{
  return (sqrt(x));
}