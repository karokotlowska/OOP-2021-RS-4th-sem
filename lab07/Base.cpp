#include "../include/Base.h"

Base::Base(std::string name):_name(name){}

std::ostream&operator<<(std::ostream &s, const Base &ob){
  ob.print(0);
  return s;
}

std::string Base::getName()const{
  return _name;
}