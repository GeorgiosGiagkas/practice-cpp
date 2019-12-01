/* Reference of an instance!*/

#include<stdio.h>

class integer{//class name

private://access modifier
  int number;
  
public://access modifier
  inline void store(int = 0);//declaration of inline mutator function with default value
  inline int getnumber(void) const;//declaration of inline accessor function
  inline void copy(const integer&);//declaration of inline mutator function that uses contant reference of an instance.

};

inline void integer::store(int x){//definition of inline mutator function with scope resolution operator
  number=x;
}

inline int integer::getnumber(void) const{//definition of inline accessor function with scope resolution operator
  return number;
}

inline void integer::copy(const integer& inref){//definitoin of inline mutator funstion using constant referense of an instance of class integer
  number=inref.getnumber();
}



//main funtion
int main(){
  integer in1, in2;//intansiation of class integer. Create 2 instancies in1, in2
  in1.store(5);//call mutator function store, to assign 5 to number variable

  in2.copy(in1);//call mutator funtion copy, using instance in1 as argument. A constant reference is used to avoid any changes in instance in1.

  printf("Instance 1: %d\n",in1.getnumber() );
  printf("Instance 2: %d\n", in2.getnumber());



  return 0;
}
