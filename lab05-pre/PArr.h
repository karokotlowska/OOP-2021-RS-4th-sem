#pragma once
#include <iostream>
#include "Wrapper.h"
class PArr{
  friend std::ostream& operator<<(std::ostream& out, const PArr& arr);
public:
  PArr(int k){
    _array=new Wrapper*[k];
    _size=k;
  }
  Wrapper* &operator[](int k){
    return _array[k];
  }
void operator=(const PArr& arr){
  this->~PArr(); //bez tej linijki nie zwalnia sie  cala pamiec - bo trzeba zwolnic pierw to co bedziemy przekopiowywac
  _array=new Wrapper*[arr._size];
  _size=arr._size;
  for(int i = 0; i < _size; ++i) {
		_array[i] = arr._array[i]->clone();
	}
}
~PArr() {
	for(int i = 0; i < _size; ++i)
		delete _array[i];

	delete[] _array;
}
private:
 Wrapper **_array;
 int _size;
};

std::ostream& operator<<(std::ostream& out, const PArr& arr) {
	for(int i = 0; i < arr._size; ++i)
		out << *arr._array[i] << " ";
	return out;
}