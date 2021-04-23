#include "../include/File.h"


File::File(std::string name):Base(name){}


void File::print(int sp)const{
  while(--sp>=0){
    std::cout<<" ";
  }
  std::cout<<getName()<<getType()<<std::endl;
}

std::string File::getType()const{
  return " (FILE)";
}
