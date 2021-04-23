#pragma once
#include <iostream>
#include <string>

class Base{
public:
/*@brief konstruktor ustawiajacy nazwe pliku/katalogu
@param nazwa ktora ma byc ustawiona
*/
  Base(std::string name);

  /*@brief destruktor domyslny*/
  virtual ~Base()=default;

  /*@brief virtualna ktora jest przykrywana przez metody z klas Dir i File
  @param sp poczatkowa liczba spacji
  */
  virtual void print(int sp)const{}

  /*metoda zwracająca nazwe danego katalogu lub pliku*/
  std::string getName()const;
protected:
  std::string _name;
};

/*operator printujący obiekt, ktory wywoluje na obiekcie metode print z poczatkowa liczba spacji, a nastepnie w sposób rekurencyjny wypisywane są elementy wewnątrz katalogów dzieki funkcjom print nalężących do klas Dir i File, ktore przykrywają tą wirtualną metodę*/
std::ostream&operator<<(std::ostream &s, const Base &ob);
