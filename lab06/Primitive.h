#pragma once
#include <iostream>
class Primitive{
public:
  /*@brief kontruktor domyslny obiektu */
  Primitive()=default;

  /*@brief destruktor domyslny*/
  ~Primitive()=default;


  /*@brief kontruktor z parametrem k, ktory ustawia wartosc _x równą k
  @param k - liczba ktora jest ustawiana jako _x, ktora potem jest uzywana do wykonywania bardziej skomplikowanych dzialan
  */
  Primitive(const double k):_x(k){}


  /*@brief metoda printująca dzialania oraz wynik tych dzialan, dziala w taki sposób ze najpierw wywolywana jest metoda PrintEach() na ktorejs z klas pochodnych na ktorej obecnie dzialamy - this->printEach -, a nastepnie w tych klasach pochodnych (poprzez zaslonięcie funkcji za pomocą override) wywolywane są metody printujące kolejne klasy pochodne - i tak po kolei prez co "schodzimy głębiej" i mamy zachowaną prawidłową kolejnosc wypisywania
  */
  virtual void PrintWithValue()const;


  /*@brief metoda wirtualna printująca wartość _x, ktora jest "przykrywana" przez metody PrintEach() w klasach pochodnych, dziala poprzez wykonaywanie dzialan "schodząc głebiej w klasy" podobnie jak metoda wyzej
  */
  virtual void PrintEach()const;


  /*@brief metoda ustawiająca liczbę k na miejsce _x
  @param
  */
  void Set(const double k);


  /*@brief metoda wirtualna printująca wynik danego dzialania, jest "przykrywana" przez metody getres() w klasach pochodnych
  @return zwraca wartość _x
  */


  virtual double getres()const{return _x;}
private:
//paramert przechowujący liczbę, ktora potem jest uzywana do wykonywania bardziej skomplikowanych dzialan
  double _x;

};