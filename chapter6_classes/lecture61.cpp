/*accessor functions. Compiler cannot distinct accessor funtion and mutator function. It considers all mutator funtion.So the use of keyword 'const' at  funtion declaration and definition asures that no chages can be done using so called accesspor function */

#include<stdio.h>

class integer{

private:
  int number;
public:
  inline void store(int=0);//mutator with default arguments//function declaraton
  inline int print(void) const;//accessor with const, to prevent make any changes//funtion declaration
};

//caution!You cannot append the keyword const in static member function or global funtions!

inline void integer::store(int x){//inline mutator funtion with class scopre using scope resolution operator
  number=x;
}


inline int integer::print(void) const{//inline accessor using keyword const with class scope using resolution operator.
  return number;
}


int main(){


  integer in;//Instantioation. Creates an instance of class integer in the stack

  in.store();
  printf("Default value: %d\n",in.print() );

  in.store(50);
  printf("Manually input value: %d\n", in.print());


  in.store();
  printf("Default value: %d\n",in.print() );

  return 0;
}
