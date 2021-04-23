#pragma once
#include "Base.h"
#include <iostream>

class File: public Base{
public:
/*@brief konstruktor ktory wywoluje kontruktor klasy bazowej*/
  File(std::string name);


  /*@brief metoda drukująca plik, przykrywająca print z klasy Base, z odpowiednią liczbą spacji przed nim
  @param sp liczba spacji
  */
  void print(int sp)const override;


  /*@brief metoda zwracająca typ obiektu
  @return zwraca "FILE"
  */
  std::string getType()const;
private:
};
