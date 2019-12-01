/*This is a C program that imitates class functionality*/

#include<stdio.h>

typedef struct{//user defined data type
  int number;
}integer;//tag name

void store(integer* ptr, int x){//a struct pointer, and a int number. Global function
  ptr->number=x;//assign x to number using -> (because ptr is a pointer)
}

int print(const integer* ptr){//use constant, so that the function does not change 'number' content. Global function
  return ptr->number;
}

int main(){

  integer in;//initialize user defined data type 'integer' as 'in'

  store(&in, 5);//use global function store. Argument is a pointer to 'in', that is an address to 'in'

  printf("Result: %d\n", print(&in));//as store

  return 0;
}
  
  
