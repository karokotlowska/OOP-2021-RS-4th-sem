#pragma once
#include <functional>
#include <vector>
/*@brief klasa przechowujaca w vectorze różne funkcje oraz wyniki ich zlozen*/
class ZlozenieFunkcji{
public:
/*@brief metoda wkładająca funkcje do vectora
@param fun - funkcja zwracająca double, wywolywana od parametru const double, którą chcemy włożyć do vectora za pomocą push_back*/
  void insert(std::function<double(const double)> fun);

  /*@brief funkcja zwracająca wynik złożen wielu funkcji
@param x - argument dla ktorego chcemy liczyc wartosci funkcji
@return zwraca wynik zlozenia*/
  double wynik(const double x);

  /*@brief operator konwertujący na double zracający i-ty wynik z tablicy _res
@param i - indeks, od ktorego chcemy zwrócić wartosc z tablicy wyników
@return zwraca wynik zlozenia i-tego w koljenosci*/
  double operator[](int i);

  /*liczba statyczna, ktora wraz z dodawaniem kolejnych funkcji do tablicy, zwiększa się o 1*/
  static int size;
private:
/* dwa wektory, pierwszy _list - przechowuje liste funkcji double(double)-------------drugi _res przechowuje rezultaty - wyniki złożen funkcji*/
  std::vector<std::function<double(double)>> _list;
  std::vector<double> _res;
};