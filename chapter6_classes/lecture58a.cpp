//Array of instances of a class

#include<stdio.h>

class integer//class name
{
private:
  
  int number;//private data member

public:
  void store(int);//mutator function
  int print(void);//accessor function
  
};

void integer::store(int x){//function definition
  number=x;
}

int integer::print(void){//function definition
  return number;
}



int main(){

  const int size=5;

  integer array[size];//instantiation. Array of instancies of class integer.

  int i;//counter
  for(i=0;i<size;i++){
    array[i].store(i);//for each instance(object) of the array store i
  }

  for(i=0;i<size;i++){
    printf("%d\n", array[i].print() );//for each instance(object of the array print i
  }
  
  return 0;

}

  
