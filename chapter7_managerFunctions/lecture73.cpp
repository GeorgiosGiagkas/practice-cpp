/* Implicit conversion */

#include<stdio.h>
#include<string.h>

class student{
private:
  int roll_no;
public:
  inline student();//default constructor
  inline student(int);//constructor
  inline ~student();//destructor
  inline int get(void) const;//accessor
  inline void copyinstance(const student&);//mutator fuction taking argument as constant reference of student

};

inline student::student(){
  puts("Default constructor");
  roll_no=0;
}

inline student::student(int x){
  puts("Constructor");
  roll_no=x;
}

inline student::~student(){
  puts("Destructor");
}

inline int student::get(void) const{
  return roll_no;
}

inline void student::copyinstance(const student& s){
  roll_no=s.roll_no;
}


int main(){

  student st1;//instantiote and initialize date members with default constructor
  student st2(5);//instantiate and initialize date member with constructor arguments

  printf("Result: %d\n", st1.get());
  printf("Result: %d\n", st2.get());

  st1.copyinstance(st2);//Copy data member of reference instance of st2 to st1 
  printf("Result: %d\n", st1.get());

  student st3;
  st3.copyinstance(10);//implicit conversion
  printf("Result: %d\n", st3.get());

  return 0;
}
