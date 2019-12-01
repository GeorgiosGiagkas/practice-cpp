/*Create a base class called 'shape'. Use this class to store two double type values that could be used to 
compute the area of figures. Derive two specific classes called 'triangle' and 'rectangle' from the base 'shape'. 
Add to the base class, a member function getData() to initialize base class data members and another member 
function displayArea() to compute and display the area of figures. 
 
Using three classes, design a program that will accept dimensions of a triangle or a rectangle interactively, 
and display the area.      
 
Remember the two values given as input will be treated as lengths of two sides in the case of rectangle, 
and as base and height in the case of rectangle, and used as follows:
 
Area of rectangle : x * y 
Area of triangle : 1/2 * x * y
 
Hint: Use virtual function mechanism*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class shape{//base class
protected:
  double width;
  double height;
public:
  void getData(int x, int y){
    width=x;
    height=y;
  }

  virtual void displayArea(){}
};


class rectangle:public shape{
public:
  void displayArea(){
    cout << "The area of rectangle is: "<<(width*height)<<endl;
  }
};

class triangle:public shape{
public:
  void displayArea(){
    cout<<"The area of triangle is: "<<(width*height/2)<<endl;
  }
};

class circle:public shape{
public:
  void displayArea(){
    cout<<"The areaof the circle is: "<< 3.14*width*width<<endl;
  }
};


int main(){
  srand(time(0));
  shape* shape_ptr;

  switch(rand()%3){
  case 0:{
    shape_ptr = new rectangle;
    shape_ptr->getData(10,10);
    shape_ptr->displayArea();
    break;
  }
  case 1:{
    shape_ptr = new triangle;
    shape_ptr->getData(10,10);
    shape_ptr->displayArea();
    break;
  }
  case 2:{
    shape_ptr = new circle;
    shape_ptr->getData(10,0);
    shape_ptr->displayArea();
    break;
  }
  }
  
  return 0;
}

