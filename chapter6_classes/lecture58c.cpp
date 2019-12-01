/*create an array of instances of a class on the heap*/

#include<stdio.h>

class integer{//class name
private:
  int number;
public:
  void store(int);//mutator function
  int print(void);//accesor function
};


void integer::store(int x){
  number=x;
}

int integer::print(void){
  return number;
}

int main(){

  const int size = 5;

  integer* ptr = new integer[size];//array of instances of class integer on the heap

  if(ptr==NULL){
    printf("No heap space!\n");
  }
  else{
    int i;//counter
    for(i=0;i<size;i++){
      ptr[i].store(i);//for each instance of class integer, use corresponding store function call
    }

    for(i=0;i<size;i++){
      printf("%d\n", ptr[i].print() );//for each instance of class integer, use corresponding print function call
    }
  }

  delete [] ptr;//free memory on the heap (for array use [])
  
  return 0;
}
