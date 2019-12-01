/* Virtual function - achieve late binding (01.txt) */

#include<iostream>
using namespace std;

class base{//parent class
public:
  virtual void identify(void);//declare virtual function only in base class. Use keyword only in declaration
};

void base::identify(void){//for late binding there is no point fon inline because compiler does not know which function to call until run time

  cout<<"Base class"<<endl;
}

class derived:public base{//child class inherits form base with public derivation
public:
  void identify(void);//keyword virtual only used once in base class
};

void derived::identify(void){
  cout<<"Derived class"<<endl;
}


int main(){

  base* ptr_base =  new derived;//To achieve late binding, use address of base class where virtual function exits.

  ptr_base->identify();//calls function from derived 

  delete ptr_base;



  base& ref_base = *(new derived);//create reference instead of pointer. new derived is pointer, with * use intance itself

  ref_base.identify();//calls function from derived

  delete &ref_base; //free memory from the heap. &ref_base is the address of the intance

  return 0;
}
