#include<iostream>
#include "baseOne.h"
#include "baseTwo.h"
#include "derived.h"
#include "derived.cpp"
using namespace std;

int main(){

  baseOne b1(10);
  baseTwo b2('z');
  Derived d(7,'a',3.5);

  cout<<"Object b1 contains integer: "<<b1.getData()
      <<"\nObject b2 contains character: "<<b2.getData()
      <<"\nObject d contains:\n"<<d<<"\n\n";


}
