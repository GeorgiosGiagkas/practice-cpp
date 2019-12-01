/* MyString Class */

#include<iostream>
#include "stringFunctions.cpp"
using namespace std;


class MyString{
private://access specifier
  char* name;//character pointer
public:
  inline MyString(const char* = "\0");//constructor with default
  inline MyString(const MyString&);//copy constructor that takes const ref instance of class MyString
  inline ~MyString();//destructor

  bool operator==(const MyString&);//operator overloading function for ==.Takes const ref of instance, return true or false
  bool operator!=(const MyString&);
  bool operator<(const MyString&);

  MyString operator+(const MyString&);//returns an object of class MyString
  MyString operator=(const MyString&);
  void operator-();//unary operator that return an instance of class MyString
  
  inline const char* getName(void) const;//accessor function
};


inline MyString::MyString(const char* s){//constructor
  name= new char[stringLength(s)+1];
  stringCopy(name, s);
}

inline MyString::MyString(const MyString& s){//copy constructor
  name= new char[stringLength(s.name)+1];
  stringCopy(name, s.name);
}

inline MyString::~MyString(){//destructor
  delete [] name;//free allocated memory (for array) from the heap
}


bool MyString::operator==(const MyString& s){//binary operator
  if(!stringCompare(name,s.name)){//stringCommpares returns 0 if string are the same
    return true;//if strings are the same
  }
  else {
    return false;//if strings are not the same
  }
}

  

bool MyString::operator!=(const MyString& s){//binary operator
  if(!stringCompare(name,s.name)){//stringCommpares returns 0 if string are the same
    return true;//if strings are the same
  }
  else {
    return false;//if strings are not the same
  }
}


bool MyString::operator<(const MyString& s){
  if(stringLength(name)<stringLength(s.name)){
    return true;
  }
  else{
    return false;
  }
}





MyString MyString::operator+(const MyString& s){
  MyString temp;
  stringCat(temp.name, name);
  stringCat(temp.name,s.name);
  return temp;
}

MyString MyString::operator=(const MyString& s){
  MyString temp;
  stringCopy(temp.name, s.name);
  return temp;
}


void MyString::operator-(){
  stringReverse(name);
}


inline const char* MyString::getName(void) const{
  return name;
}





int main(){
  char sname[80];

  cout<<"Enter name"<<endl;
  cin>>sname;//user input. Overload function using overloading of operator right shift >>
  MyString S1(sname);//instantiate class MyString using input string as argument

  cout<<"Enter name"<<endl;
  cin>>sname;
  MyString S2(sname);

  if(S1==S2){
    cout<<"Strings are equal"<<endl;
  }
  else {
    cout<<"Strings are NOT equal"<<endl;
  }

  if(S1<S2){
    cout<<S2.getName()<<" is larger"<<endl;
  }
  else{
    cout<<S1.getName()<<" is larger"<<endl;
  }

  if(S1!=S2){
    cout<<"Bothe String are same"<<endl;
  }
  else{
    cout<<"Both Strings are different"<<endl;
  }

  MyString S3= S1+S2;//instansiate S3
  cout<<S3.getName()<<endl;

  -S3;//reverse 
  cout<<S3.getName()<<endl;

  MyString S4=S3;
  //MyString S4(S3);
  cout<<S4.getName()<<endl;



  
  return 0;
}


