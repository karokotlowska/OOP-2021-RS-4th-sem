#pragma once
#include <iostream>

class Vertex{
public:
/*@brief kontruktor
*/
  Vertex(int x, int y);
  /*@brief mettoda zwracająca jedna wspolrzxedna wirzcholka x
*/
  int getx()const;
  /*@brief mettoda zwracająca jedna wspolrzxedna wirzcholka y
*/
  int gety()const;
  /*@brief mwetoda porównująca dwa wierzcholki
*/
  bool operator!=(const Vertex &v)const;
  /*@brief metoda porównująca dwa wierzchoolki
*/
  bool operator==(const Vertex &v)const;
  /*@brief metoda zwracajaca odleglosc miedzy wierzchilkamki
  @return zwraca dlugosc miedzy nimi
*/
  double linia(const Vertex &v)const;
private:
  int _x;
  int _y;
};
/*metoda wypisania wierzcholka*/
std::ostream &operator<<(std::ostream &s, const Vertex &v);