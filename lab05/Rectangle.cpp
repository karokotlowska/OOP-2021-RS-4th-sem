#include "../include/Rectangle.h"
#include <cmath>

Rectangle::Rectangle(std::string name):Shape2D(name){
  std::cout<<"Mowiac scisle, jestem prostokatem\n";
}

double Rectangle::area()const{
  return sqrt((_vertices[0].getx()-_vertices[1].getx())*(_vertices[0].getx()-_vertices[1].getx())*(_vertices[2].gety()-_vertices[3].gety())*(_vertices[2].gety()-_vertices[3].gety()));
  //return _vertices[0].linia(_vertices[1])*_vertices[0].linia(_vertices[3]);
}
