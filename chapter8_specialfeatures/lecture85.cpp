/* Static member function */

#include<stdio.h>

class keep_count{
private:
  static int count;//declaration of static member data
public:
  inline keep_count();//constructor
  inline ~keep_count();//destructor
  inline static int get(void);//declaration of static member function, not an accessor no const
};


int keep_count::count = 0;//definition of static member data. Initialized before main

inline keep_count::keep_count(){
  ++count;
  puts("Constructor");
}

inline keep_count::~keep_count(){
  puts("Destructor");
}

inline int keep_count::get(void){//defintion of static member function. NO (this) pointer!! Used for static data member
  return count;
}

int main(){
  printf("%d\n",keep_count::get() );//No need to instantiate a class to call static member function!!Use scope resolution operator!!!!!

  keep_count kp1, kp2, kp3; //class instantiation

  printf("%d\n",keep_count::get() );

  return 0;

}
  

  
