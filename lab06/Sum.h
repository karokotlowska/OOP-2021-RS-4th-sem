#pragma once
#include "Primitive.h"

class Sum:public Primitive{
public:
/*@brief konstruktor wpisujący dwa obiekty klasy Primitive
  @param p1 - referencja na obiekt klasy Primitive
  @param p2 - referencja na obiekt klasy Primitive
  */
  Sum(Primitive &p1,Primitive &p2);


  /*@brief metoda ktora 'przykrywa' metodę wirtualną z klasy bazowej - wypisuje wykonywane dzilaania
  */
  void PrintEach()const override;

  
   /*@brief metoda ktora 'przykrywa' metodę wirtualną z klasy bazowej - wypisuje wynik dzilaania
   @return - zwraca wynik działania
  */
  double getres()const override;
private:
  Primitive &_p1,&_p2;
};