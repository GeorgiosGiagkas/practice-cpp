/*Constructor with default arguments or one argument*/

#include<stdio.h>

class student{

private:
  int roll_no;
public:
  student();//default constructor
  student(int);//constructor(manager function)
  ~student();//destrucctor
  inline int get(void) const;

};

inline student::student(){//default costructor definition
  roll_no=0;
  puts("Call Default Constructor");
}

inline student::student(int x){//constructor definition
  roll_no=x;
  puts("Call Constructor");
}

inline student::~student(){//destructor definition
  puts("Call Destructor");
}

inline int student::get(void) const{//accessor function
  return roll_no;
}



int main(){
  puts("In main...");

  student ryu;//instansiate class student with default constructor
  printf("Roll number with default: %d\n", ryu.get() );

  student akuma(5);//instansiate class student with one argument
  printf("Roll number with one argument: %d\n", akuma.get());
  
  puts("Leaving main...");

  return 0;
}
