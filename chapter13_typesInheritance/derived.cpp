#include<iostream>
#include"derived.h"

using namespace std;



double Derived::getReal() const{
  return real;
}

ostream& operator<<(ostream& output, const Derived& d){
  output<< "Integer: "<<d.num<<"\nCharacter: "<<d.letter<<"\nReal number: "<<d.real;

  return output;
}
