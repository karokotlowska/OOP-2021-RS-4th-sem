#pragma once
#include <iostream>
#include <vector>
#include "Base.h"

/*klasa odwzorowujaca katalog
-----------------------------------------
slowo kluczowe 'final' przy deklaracji klasy mowi o tym ze jest ona ostateczna na liscie dziedziczenia na tej gałęzi
-----------------------------------------*/
class Dir final: public Base{
public:
  /*@brief kosntruktor klasy Dir, wywolujący w sobie kontruktor klasy bazowej
  @param name nazwa katalogu
  */
  Dir(std::string name);


  /*@brief dekstruktor wywolujacy sie rekurencyjnie*/
  ~Dir();


  /*@brief operator dodajacy do katalogu kotalog lub plik
  @param dod obiekt typu dir lub file, ktory jest dodawany do katalogu
  */
  void operator+=(Base *dod);


  /*@brief metoda printujaca przykrywajaca funkcje print z Base
  @param sp - liczba spacji o ktore nalezy przesunąc sie wypisujac katalog
  */
  void print(int sp)const override;


  /*@brief metoda zwracajaca katalog ktory chcielismy znalezc
  @param name nazwa szukanego katalogu
  @return zwraca wskaznik do znalezionego katalogu
  */
  Dir *findDir(std::string name);


  /*@brief metoda dodajaaca do katalogu obiekt, wykorzystujaca operator +=
  @param ob - obiekt do dodania
  */
  void add(Base *ob);


  /*@brief metoda zdobywająca wskaznik do pliku lub folderu ktorego poszukujemy po nazwie
  @param nawza, ktorej katalogu lub pliku poszukujemy
  @return zwraca wskaznik na katalog lub plik
  */
  Base *get(std::string name);


  /*@brief metoda zwracająca typ obiektu
  */
  std::string getType()const;
private:
/*wektor przechowujący składniki File lub Dir*/
  std::vector<Base*> _vec;
};


