/* VPTR and V-table. A VTABLE is created for each class that has a least one virtual function (parent and child classes). Each Vtable contains the addresses of virtual functions. The instance of a class then has a virtual pointer, VPTR, that targets the vtable thus the coresponding virtual function to be called at run time. So, multiple  instances of the same class have their own VPTR that targets the same VTable */

#include<iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

class Animal{//parent class
public:
  virtual void makeSound(){//virtual function , declare and defined
    cout<<"Animal"<<endl;
  }

  virtual void walk(){}//virtual function, declare and defined
  void sleep(){}//member function also called method
};


class cat:public Animal{
public:
  void makeSound(){//override virtual function
    cout << "Mewow"<<endl;
  }
};

class dog:public Animal{
public:
  void makeSound(){//override virtual function
    cout<<"Gav Gav"<<endl;
  }

  void walk(){};
};

class duck:public Animal{
 public:
  void makeSound(){//override virtual function
    cout<<"Quack quack"<<endl;
  }
};

int main(){
  srand(time(0));
	
  Animal* animal;//pointer of type class Animal  on the stack

  switch(rand()%3){//random number generator. Remainder can be 0,1, or 2.
  case 0:{
    animal=new cat;//create instance of derived class on the heap
    break;
  }
  case 1:{
    animal=new dog;
    break;
  }
  case 2:{
    animal=new duck;
    break;
  }
  }

  animal->makeSound();//run time. Dynamic binding. Compiler does not know what function to call in compile time.

  return 0;
}
