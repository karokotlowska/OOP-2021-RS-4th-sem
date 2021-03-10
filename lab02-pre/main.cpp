#include <iostream>
#include "include/V.h"

//#define COMPILATION_ERROR

int main() {
	V v1(3);		
	const V v2(4);	
	v1.at(0) = 2;
	v1.at(1) = 3;
	const V v3 = v1;
	v1.at(1) = 0;
	v3.at(2) = 2;

	v1.print("v1: ");
  v2.print("v2: ");
	v3.print("v3: ");
  

	double prod = V::dot(v1, v3); 
	std::cout << "Dot product = " << prod << std::endl;
	std::cout << "Another dot product: " << std::endl;
	V::dot(v1,v2);

	double norm = static_cast<double>(v3); // == v3.norm();
	std::cout << "Norm = " << norm << ", " << v3.norm() << std::endl;
	
	V v4 = V::sum(v1, v3); 
	v4.print("v1 + v3: ");

	V v5 = std::move(V::sum(v1, v3));
	v5.print("v1 + v3: ");

	V::sum(v1, 3).print("v1 + 3 : ");
  
  V v6=v1+v3;
  v6.print("v1 + v3: ");
///////////////////////////////////////////////////////
  V v7=v6+6;
	v7.print("v6 + 6: ");

  V v8=6+v6;
  v8.print("6 + v6: ");

  V v9=6*v3;
  v9.print("6 * v3: ");

  V v10{10,20,30,40,40,40};
  v10.print("lista inic: ");

//pierwszy argument to czym ma byc wypelniony wektor
//drugi aegument to liczba elementow w wektorze
  const V v11=V::from_costam(2,5);
  v11.print("v11: ");

  V *v12=new V[4]{{1,1,1},{2,2,2,2,2},{3,3},{4,4,4,4}};
  for(int i=0;i<4;i++){
  v12[i].print("v1[]: ");
  }
  V *v13 =new V(3);
  *v13=v12[0];
  v13->print("v13: ");
  
  


	#ifdef COMPILATION_ERROR
	V strange = 5;
  strange.print("str: ");
	#endif
}

/*
//Output:
v1: (2, 0, 0)
v2: (0, 0, 0, 0)
v3: (2, 3, 2)
Dot product = 4
Another dot product: 
Error, vectors of different dimensions!
Norm = 4.12311, 4.12311
v1 + v3: (4, 3, 2)
v1 + v3: (4, 3, 2)
v1 + 3 : (5, 3, 3)
*/
