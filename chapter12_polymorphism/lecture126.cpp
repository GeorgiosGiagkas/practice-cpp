/* Abstract base class and Pure Virtual Function. If a class has at least one pure virtual function( 0 is assigned to virtual function definition) then the class is Abstract! It cannont be instansiated as an object, but can be used as interface. The pure firtual function has to be overriden by child classes! */

#include<iostream>
using namespace std;
enum boolean{False =0, True=1};

class person{//abstract base class
protected:
  char name[40];
public:
  void setName(){
    cout<<"Enter name"<<endl;
    cin>>name;
  }
  void printName(){
    cout<<"Name is:"<<name<<endl;
  }

  boolean virtual isOutstanding()=0;//pure virtual function
};


class student:public person{//child class inherits form  parent.
private:
  float gpa;
public:
  void setGPA(){
    cout<<"Enter GPA:"<<endl;
    cin>>gpa;
  }

  boolean isOutstanding(){//override function
    return (gpa>3.5) ? True : False;
  }
};

class professor:public person{
private:
  int numPubs;
public:
  void setNumPubs(){
    cout<<"Enter number of publications:"<<endl;
    cin>>numPubs;
  }

  boolean isOutstanding(){//override function
    return (numPubs>100)?True:False;
  }
};


int main(){

  person* persPtr[100];//creates an array of person pointers on the stack
  student* studPtr;//pointer of class stundent. On the stack
  professor* profPtr;//pointer of class professor. on the stack

  int n=0;//counter
  char choice;

  do{
    cout<<"Enter student of professor (s/p): ";
    cin>>choice;
    if(choice=='s'){
      studPtr =  new student;//on the heap
      studPtr->setName();
      studPtr->setGPA();
      persPtr[n++] = studPtr;//store studPtr pointer into pointer array then increment index
    }
    else{
      profPtr = new professor;//on the heap
      profPtr->setName();
      profPtr->setNumPubs();
      persPtr[n++] = profPtr;//store profPtr pointer into pointer array then increment index
    }

    cout<<"Enter another (y/n)?";
    cin>>choice;
  }while(choice=='y');

  for(int j=0; j<n;j++){
    persPtr[j]->printName();
    if(persPtr[j]->isOutstanding()){//call virtual function based on VTABLE!!!!
      cout<<"This person is outstanding"<<endl;
    }
  }

  return 0;
}
    
