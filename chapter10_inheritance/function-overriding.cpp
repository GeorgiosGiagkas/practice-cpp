/* Function overriding */

#include<iostream>
using namespace std;

class base{//name of parent class
public://public access specifier
  void func(const char* ptr){//definition of function inside class
    cout<<"In a base class\t"<<ptr<<endl;
  }
};


class derived:public base{//child class named derived. Inherits from parent class named base with public derivation
public:
  void func(double y){//function with same name is overriden. Only the new function definition considered by the compiler
    cout<<"In a derived class\t"<<y<<endl;
  }
};
				     

int main(){
  derived d;//instansiate class derived. (under the hood, base class is instantiated too.)

  d.func(5);//this runs

  //d.func("Hello World");//this does not run. Function that takes const char* is overriden
  d.base::func("Hello world");//call base function explicitely

  return 0;
}
