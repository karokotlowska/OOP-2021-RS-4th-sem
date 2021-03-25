#pragma once
#include <cmath>

/*@brief klasa sinusa, zawierająca parametry a i b oraz kilka metod*/
class Sinus{
public:
/*@brief konstruktor z dwoma parametrami
@param a - pierwszy argument funkcji sinus
@param b - drugi argument funkcji sin*/
  Sinus(const double a, const double b);
  /*@brief operator zwracający double wywolywany od const double, zwracający wartosc fukncji od parametru x
@param x - argument od ktorego wywolujemy funkcje
@return zwraca wartosc funkcji*/
  double operator()(const double x)const;
private:
  double _a;
  double _b;
};

/*@brief klasa zwracająca pierwiastek kwadratowy*/
class PierwiastekKwadratowy{
public:
/*@brief operator zwracający double wywolywany od const double, zwracający wartosc fukncji od parametru x
@param x - argument od ktorego wywolujemy funkcje
@return zwraca wartosc funkcji*/
  double operator()(const double x)const;
};

/*@brief klasa funkcji liniowej, zawierająca parametry a i b oraz kilka metod*/
class Liniowa{
public:
  /*@brief konstruktor z dwoma parametrami
@param a - pierwszy argument funkcji liniowej
@param b - drugi argument funkcji liniowej*/
  Liniowa(const double a, const double b);
  /*@brief operator zwracający double wywolywany od const double, zwracający wartosc fukncji od parametru x
@param x - argument od ktorego wywolujemy funkcje
@return zwraca wartosc funkcji*/
  double operator()(const double x)const;
private:
  double _a;
  double _b;
};


