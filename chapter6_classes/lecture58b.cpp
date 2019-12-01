//Create instance of an class dynamically in the heap

#include<stdio.h>

class integer//class name
{
private:
  int number;
public:
  void store(int);//mutator
  int print(void);//accessor
};

void integer::store(int x){//refer to class using binary scope resolution operator
  number=x;
}

int integer::print(void){//refer to class using binary scope resolution operator
  return number;
}



int main(){

  integer* ptr = new integer;//create instance of a class in the heap. Class integer pointer points to memory location of the instance in the heap.

  if(ptr==NULL){
    printf("Cannot allocate memory dynamically on the heap. No more heap space.\n");
  }

  else{
    ptr->store(5);//use arrow operator to refer to the function. Because ptr is a pointer.
    printf("Result: %d\n", ptr->print() );
    delete ptr;//free allacated memory in the heap
  }

  return 0;
}

  
