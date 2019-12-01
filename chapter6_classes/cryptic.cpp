#include<stdio.h>

class integer{//class name
private://accessor modifier
  int* ptr;//declare pointer
public:
  inline void initialize(void);//initialize pointer on the heap.
  inline void store(int=0);//store int value on the heap 
  inline int get(void) const;//return value
  inline void del(void);//free memory allocated on the heap
};

inline void integer::initialize(void){
  ptr=new int;
}

inline void integer::store(int x){
  *ptr=x;
}

inline int integer::get(void) const{
  return *ptr;
}

inline void integer::del(void){
  delete ptr;
}

int main(){
  integer in;//instantiate class integer. Memory on the stack

  in.initialize();//initialize pointer. On the heap
  
  in.store();//call store with default value
  printf("%d\n",in.get() );

  in.store(5);//call store with argument 

  printf("%d\n",in.get() );

  in.del();//free allocated memore
  
  return 0;
}
