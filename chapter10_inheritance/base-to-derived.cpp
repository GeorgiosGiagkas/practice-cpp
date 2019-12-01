/* Base to derived */

#include<iostream>
using namespace std;

class base{//parent class name
public:
  inline base();
  inline void identify(void);//function declaration
};

inline base::base(){
  cout<<"Base"<<endl;
}

inline void base::identify(void){
  cout<<"Base class function"<<endl;
}

class derived:public base{//child class. public deravation. Inherits from base
public:
  inline derived();
  inline void identify(void);//function overriding
};

inline derived::derived(){
  cout<<"Derived"<<endl;
}

inline void derived::identify(void){
  cout<<"Derived class function"<<endl;
}

int main(){

  base* ptr_base = new derived;//instantiate on heap. Base pointer to derived class!!!

  ptr_base->identify();//calls identify member function of base!!

  delete ptr_base;

  return 0;
}
