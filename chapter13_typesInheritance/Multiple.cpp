#include<iostream>
using namespace std;

class student{//base class student
protected:
  int roll_no;
  int m1, m2;
public:
  void setR(void);
  void setMarks(void);
};

void student::setR(void){
  cout<<"Enter roll number:"<<endl;
  cin>>roll_no;
}

void student::setMarks(void){
  cout<<"Enter mark for subject 1:"<<endl;
  cin>>m1;
  cout<<"Enter mark for subject 2:"<<endl;
  cin>>m2;
}

class sport{//base class sport
protected:
  int sportMark;
public:
  void setSportMark(void);
};

void sport::setSportMark(void){
  cout<<"Enter sport mark:"<<endl;
  cin>>sportMark;
}


class statement:public student, public sport{//multiple inheritance. Derived class inherits from both base classes
private:
  int total;
  double average;
public:
  void display(void){
    total= m1+m2+sportMark;
    average=double(total)/3;//type casting
    cout<<"Roll number is: "<< roll_no<<endl;
    cout<<"Total is: "<<total<<endl;
    cout<<"Average is: "<<average<<endl;
  }
};

int main(){
  statement st1;
  st1.setR();
  st1.setMarks();
  st1.setSportMark();
  st1.display();

  return 0;
}
