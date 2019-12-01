/*Constructor with one argument*/

#include<stdio.h>

class student{//class name
private:
  int roll_no;
public:
  inline student(int);//constructor
  inline ~student();//destructor
  inline int get(void) const;//accessor function
};

inline student::student(int x){//manager funstion(constructor)
  roll_no=x;
  puts("Call Constructor");
}

inline student::~student(){//iline destructor(manager function), using scopre resolution operator

  puts("Call Destructor");
}

inline int student::get(void) const{
  return roll_no;
}


int main(){

  puts("in main...");
  student ryu(50);//instantiate using constructor to initialize roll_no to 50;

  printf("Roll number: %d\n", ryu.get() );

  puts("leaving main...");

  return 0;
}
  
