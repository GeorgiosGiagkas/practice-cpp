/* Static member function */

#include<stdio.h>

class keep_count{
private:
  static int count;//declare static data member. Common for all isntancies the class. Initialized before main.
public:
  inline keep_count();//constructor
  inline ~keep_count();//destructor
  inline int get(void) const;//accessor function
};

int keep_count::count=0;//static data member definition(no static in front, only in declaration).Use scope resolution operator

inline keep_count::keep_count(){
  ++count;
  puts("Constructor");
}

inline keep_count::~keep_count(){
  puts("Destructor");
}

inline int keep_count::get(void) const{
  return count;
}

int main(){

  keep_count kc1, kc2, kc3; //instantiation of class

  printf("Result of count is %d:\n", kc1.get());

  return 0;
}
