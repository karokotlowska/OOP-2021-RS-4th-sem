#include "../include/Shape2D.h"

Shape2D::Shape2D(std::string name):_name(name){
  std::cout<<"Jestem nowa figura "<<_name<<std::endl;
}

Shape2D &Shape2D::addVertex(const Vertex &v){
  _vertices.push_back(v);
  return *this;
}

Shape2D &Shape2D::operator+=(const Vertex &v){
  return this->addVertex(v);
}

std::string Shape2D::name()const{
  return _name;
}

bool Shape2D::operator==(const Shape2D &s)const{
  if (this==&s){
    return true;
  }
  if(s._vertices.size()==_vertices.size()){
    for(unsigned i=0;i<_vertices.size();i++){
      if(s._vertices[i]!=_vertices[i]){
        return false;
      }
    }
    return true;
  }
  return false;
}

int Shape2D::size()const{
  return _vertices.size();
}

std::ostream &operator<<(std::ostream &s, const Shape2D &v){
  s<<"Figura "<<v.name()<<":\n";
  for(int i=0;i<v.size();i++){
    s<<v.getVertex(i);
  }
  s<<"\n";
  return s;
}

const Vertex &Shape2D::getVertex(unsigned i)const{
  return _vertices[i];
}