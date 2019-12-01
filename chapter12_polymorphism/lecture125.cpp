/* Virtual table. A VTABLE is created for each class that has a least one virtual function (parent and child classes). Each Vtable contains the addresses of virtual functions. The instance of a class then has a virtual pointer, VPTR, that targets the vtable thus the coresponding virtual function to be called at run time. So, multiple  instances of the same class have their own VPTR that targets the same VTable */

#include<iostream>
using namespace std;

class Polygon{//parent class
protected://access specifier. can be used from functions of child class
  int width,height;
public:
  void set_values(int a, int b){//declared and defined inside class. no need for inline or scope resolution operator
    width=a;
    height=b;
  }

  virtual int area(){//virtual funtion declared and defined inside class.No inline cause dynamic binding
    return 0;
  }

};


class Rectangle:public Polygon{//child class inherits from parent with public derivation
public:
  int area(){//virtual function
    return width*height;
  }
};

class Triangle:public Polygon{
public:
  int area(){//virtual function
    return (width*height/2);
  }
};


int main(){

  Rectangle rect;//instansiate rect on the stack
  Triangle trgl;//instansiate trgl on the stack
  Polygon poly;//instansiate poly on the stack

  Polygon* poly1= &rect;//create a Polygon(base class) pointer with address of rect (Rectancle instance)
  Polygon* poly2= &trgl;//create a base pointer that contains the address of trgl
  Polygon* poly3= &poly;

  poly1->set_values(4,5);
  poly2->set_values(4,5);
  poly3->set_values(4,5);

  //call virtual function. Base pointer(Polygon) is used

  cout<<poly1->area()<<endl;//call virtual function area. VPTR of Rectancle instance (rect) tartegs vtable of class Rectancle to fetch the corespending virtual function area 

  cout<<poly2->area()<<endl;
  cout<<poly3->area()<<endl;

  return 0;
}
					    
