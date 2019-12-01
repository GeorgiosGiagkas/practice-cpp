/* Use default function arguments in class */

#include<stdio.h>

class integer{//class name

private:
  int number;//data member

public:
  inline void store(int=0);//default argument only in declaration!! inline function
  inline int print(void) const;//inline function


  
  //function member definition inside class is inline. This type of function is not recomended in C++ cause it vialates implementation hiding concept
  /*
  void store(int x=0){
    number=x;
  }
  */
};


inline void integer::store(int x){
  number=x;
}

inline int integer::print(void) const{
  return number;
}


int main(){

  integer in;//create instance (object) of class integer

  in.store();//i have to call the function even if it has default argument to store the number
  printf("Result: %d\n", in.print());

  return 0;
}
