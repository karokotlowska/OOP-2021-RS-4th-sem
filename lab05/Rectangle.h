#pragma once
#include <iostream>
#include "Shape2D.h"

class Rectangle: public Shape2D{
public:
/*@brief konstruktor prostokąta, nadający mu imię
*/
  Rectangle(std::string name);
/*@brief metoda licząca pole
*/
  double area()const;
private:
};