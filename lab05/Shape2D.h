#pragma once
#include <iostream>
#include "Vertex.h"
#include <vector>

class Shape2D{
public:
/*@brief konstruktor
*/
  Shape2D(std::string name);
  /*@brief meroda dodająca wierzcholki
  @return zwraca shaep2d
*/
  Shape2D &addVertex(const Vertex &v);
  /*@brief meroda dodajaca wierzcholki
  @ return zwraca shape2d
*/
  Shape2D &operator+=(const  Vertex &v);
  /*@brief metoda zwracająca nawze figury
  @return zwraca nazwe fuigury
*/
  std::string name()const;
  /*@brief metoda porównująca ze sobąą dwa obiekty const Shape2D
  @retur zawraca 1 gdy obiekty takie same lub 0 gdy róze
*/
  bool operator==(const Shape2D &s)const;
  /*@brief metoda zwracająca _vertices[i]
  @return zwraca _vertices[i]
*/
  const Vertex& getVertex(unsigned i)const;
  /*@brief metoda zwracająca rozmiar wektora vertices
*/
  int size()const;
protected:
  std::string _name;
  std::vector<Vertex> _vertices;
};

std::ostream &operator<<(std::ostream &s, const Shape2D &v);