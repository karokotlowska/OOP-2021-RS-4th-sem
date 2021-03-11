#pragma once

/*klasa wektora doubli, trzymajaca jego rozmiar, zawierająca metody kilku operacji na wektorach*/
class W{
public:
  /*
  @brief konstruktor utworzony przy pomocy explicit (aby nie dozowlona było niejawność,np przy przypisaniu w mainie)
  @parameter k - liczba typu int która mówi nam o rozmiarze wektora
  */
  explicit W(const int k);
  /*
  @brief konstruktor kopiujący
  @parameter w - obiekt klasy W, który będziemy kopiować
  */
  W(const W &w);
   /*
  @brief konstruktor przenoszący
  @parameter w - obiekt klasy W, który będziemy "przenosić"
  */
  W(W &&w);
  /*
  @brief destruktor usuwający zaalokowane w wektorze miejsce w pamieci
  */
  ~W();
  /*
  @brief metoda polegająca na zwróceniu jedenej "komórki" w tablicy wektora jako referencja
  @parameter k - liczba typu int która mówi nam która z kolei "komórka" w wektorze nas interesuje
  @return zwraca referencje na "komórke" wektora
  */
  double &at(const int k)const;
  /*
  @brief statyczna funkcja która zwraca iloczyn skalarny dwóch wektorów
  @parameter w1 referencja na obiekt klasy W, ktorego wektor bedzie jednym ze skladników iloczynu wektorowego
  @parameter w2 referencja na obiekt klasy W, ktorego wektor bedzie jednym ze skladników iloczynu wektorowego
  @return zwraca iloczyn skalarny dwóch wektorów
  */
  static double dot(const W &w1,const W &w2);
  /*
  @brief metoda drukująca wektor
  @parameter t - tekst, mówiacy o tym ktory wektor bierząca drukujemy
  */
  void print(const char *t)const;
  /*
  @brief operator który zamienia obiekt klasy W na double
  @return zwraca normę wektora
  */
  explicit operator double()const;
  /*
  @brief metoda oplegająca na zwróceniu normy wektora
  @return zwraca normę wektora
  */
  double norm()const;
  /*
  @brief operator dodający do siebie dwa obiekty klasy W
  @parameter w1 - drugi z obiektów, który bedzie dodawany do klasy na której wykonywany będzie operator
  @return zwraca wskaznik na obiekt na którym "wykonywana" jest ta operacja
  */
  W operator+=(const W &w1);
  /*
  @brief operator dodający do siebie obiekt klasy ora lizcbę
  @parameter k - liczba typu int, którą dodajemy do wektora
  @return zwraca wskaznik na obiekt na którym "wykonywana" jest ta operacja
  */
  W operator+=(const int k);
private:
/*_v - wektor*/
  double *_v;
/*_size - paramter przechowujący inofrmacje o rozmiarze wektora*/
  int _size;
};