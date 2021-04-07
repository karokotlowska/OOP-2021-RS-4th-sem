#pragma once
#include <iostream>
class Wrapper{
public:
  virtual std::ostream& print() const = 0;
  virtual ~Wrapper()=default;
  virtual Wrapper* clone() const = 0;
private:
};

//jesli bede chciala wypisac ktorys z warpperów operatorem <<, wywoluje wrapper.print, ktory przez to ze klasy poszczegolnych wraperów są override, wypisze mi to co sie znajduje w posczegolnych klasach
static std::ostream& operator<<(std::ostream& out, const Wrapper& wrapper) {
	return wrapper.print();
}