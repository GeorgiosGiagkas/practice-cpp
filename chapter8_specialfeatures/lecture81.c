/* This pointer */

#include<stdio.h>

typedef struct//define user data type (structure) integer
{
  int num;
}integer;

void increment(integer* const This, int x){//prototype and definition of funtion. First Argument is a integer pointer that the address which ppoints cannot changen.
  This->num += x;
}

int get(const integer* const This){//prototype and definition of function. Argument is a integer pointer that the address which points cannot change, neither the value of the variable that it poits. Function resembles accessor funtion in C++
  return This->num;
}

int main(){

  integer in1 = {10};//initialization of structure integer with value of 10
  printf("Result is : %d\n", get(&in1) );//call get function by address

  increment(&in1, 5);//call increment funtion by address(first argument) and by value(second argument)
  printf("Result is : %d\n", get(&in1) );

  return 0;
}
