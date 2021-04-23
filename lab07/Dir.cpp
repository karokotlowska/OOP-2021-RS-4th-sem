#include "../include/Dir.h"


Dir::Dir(std::string name):Base(name){}


void Dir::operator+=(Base *dod){
  _vec.push_back(dod);
}

void Dir::print(int sp)const{
  int br=sp;
  while(--br>=0){
    std::cout<<" ";
  }
  std::cout<<this->getName()<<this->getType()<<std::endl;
  for(unsigned i=0;i<_vec.size();i++){
    _vec[i]->print(sp+2);
  }
}

Dir *Dir::findDir(std::string name){
  Base* ret=get(name);
  if(ret&&dynamic_cast<Dir*>(ret)){
    return dynamic_cast<Dir*>(ret);
  }
  return nullptr;
}

void Dir::add(Base *ob){
  *this+=ob;
}

Base *Dir::get(std::string name){
  if(name ==getName()){
    return this;
  }
  for(unsigned i=0;i<_vec.size();i++){
    if(name==_vec[i]->getName()){
      return dynamic_cast<Base*>(_vec[i]);
    }
    Dir*kat1=dynamic_cast<Dir*>(_vec[i]);
    if(kat1){
      Base *ret=kat1->get(name);
      if (ret){
        return dynamic_cast<Base*>(ret);
      }
    }
  }
  return nullptr;
}

std::string Dir::getType()const{
  return " (DIR)";
}


Dir::~Dir(){
  std::cout<<"Deleting Dir: "<<getName()<<std::endl;
  for(unsigned i=0;i<_vec.size();i++){
    std::cout<<"About to delete "<<_vec[i]->getName()<<std::endl;
    delete _vec[i];
  }
  _vec.clear();
}
