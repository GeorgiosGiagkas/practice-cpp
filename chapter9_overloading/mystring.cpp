/* Create class that handles string functions */

#include<iostream>
#include<string.h>
using namespace std; //collection of classes

class MyString{
private://access specifier
  char* name;//character pointer
public:
  inline MyString(const char* = "\0");//constructor, default argument const character pointer
  inline MyString(const MyString&);//copy constructor that takes constant reference of isntance of class MyString
  inline ~MyString();//destructor
  bool operator<(const MyString&);//bool returns true or false. Operator overloading <. Takes argument const ref. of instance
  bool operator==(const MyString&);
  MyString operator=(const MyString&);//returns MyString.Operator overloading =. Takes argument const ref. of instance
  void operator-();//unary operator
  bool operator!=(const MyString&);
  MyString operator+(const MyString&);
  inline const char* getName(void) const;//accessor function
};

inline MyString::MyString(const char* ptr){//Constructor.contents of variable (string) that pointer targets cannot chage
  cout<<"Constructor"<<endl;//cout instance using left shift<< to print output (endl: end of line). Needs iostream header
  name = new char[strlen(ptr)+1];
  strcpy(name, ptr);
}

inline MyString::MyString(const MyString& s){//copy constructor
  cout<<"Copy Constructor"<<endl;
  name = new char[strlen(s.name)+1];//allocate memory from the heap. Character array length s.name (+1 for '\0')
  strcpy(name,s.name);//copy contents of s.name to name
}

inline MyString::~MyString(){//destructor
  cout<<"Destructor"<<endl;
  delete [] name;
}

bool MyString::operator<(const MyString& s){//binary operator 1 implicit, 1 explicit argument
  if(strlen(name)<strlen(s.name)){
    return true;
  }
  else{
    return false;
  }
}

bool MyString::operator==(const MyString& s){//binary 1 impplicit , 1 explicit
  if(!strcmp(name, s.name)){//strcmp return 0 if the strings are equals
    return true;
  }
  else{
    return false;
  }
}


bool MyString::operator!=(const MyString& s){//binary operator
  if(!strcmp(name,s.name)){
    return true;
  }
  else{
    return false;
  }
}

MyString MyString::operator+(const MyString& s){//binary operator
  MyString temp;//instantiate usting default constructor
  strcat(temp.name,name);//char *strcat(char *dest, const char *src)
  strcat(temp.name,s.name);
  return temp;
}

MyString MyString::operator=(const MyString& s){//binary operator
  MyString temp;
  strcpy(temp.name,s.name);
  return temp;
}


void MyString::operator-(){//unary operator

  //strrev(name);//char* strrev(char* str);//NOT supported in Linux. So create my own 
  
  char* temp = new char[strlen(name)+1];//allocate memory on the heap
  strcpy(temp,name);//char *strcpy(char *dest, const char *src)
  
  for(int i=0;i<strlen(temp);i++){    
    *(name+i)=*(temp+(strlen(temp)-i-1));
  }
  delete [] temp;//free allocated memory from the heap for string (array) 
}


inline const char* MyString::getName(void) const{//accessor function
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
