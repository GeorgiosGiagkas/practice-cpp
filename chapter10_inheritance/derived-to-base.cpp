/* Derived to base */

#include<iostream>
using namespace std;

class base{//parent class name
public:
  inline void identify(void);//function declaration
};

inline void base::identify(void){
  cout<<"Base class"<<endl;
}

class derived:public base{//child class. public deravation. Inherits from base
public:
  inline void identify(void);//function overriding
};

inline void derived::identify(void){
  cout<<"Derived class"<<endl;
}

int main(){

  base* ptr_base = new base;//insantiate class base on heap. Assigned to base pointer
  derived* ptr_derived =  new derived;//instantiate class derived on the heap. Assign to derived pointer

  ptr_base->identify();
  ptr_derived->identify();
  ptr_derived->base::identify();//points to base "portion" of derived class using scope resolution operator

  delete ptr_derived;//free memory from the heap
  delete ptr_base;
  
  return 0;
}
