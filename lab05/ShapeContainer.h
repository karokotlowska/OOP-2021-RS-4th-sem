#pragma once
#include <iostream>
#include <vector>
#include "Shape2D.h"

class ShapeContainer{
public:
/*@brief metoda dodjaca elemenety do konetera
*/
  void operator+=(Shape2D *s);
  /*@brief metoda zwracajaca romziar wektoras _konetner
*/
  int size()const;
  /*@brief metoda operatorowa zwracajaca _kontener[i]
  @return zwraca _koneter[i]
*/
  Shape2D* operator[](unsigned i)const;
private:
  std::vector<Shape2D*> _kontener;
};
/*@brief meroda wypisująca kontener
*/
std::ostream &operator<<(std::ostream &s, const ShapeContainer &v);