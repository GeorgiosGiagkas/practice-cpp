/* this pointer */

#include<stdio.h>

class integer{
private:
  int number;
public:
  inline integer(int=0);//constructor with default value
  inline ~integer();//destructor
  inline void increment(int);//mutator function
  inline int get(void) const;//accessor funtion
};


inline integer::integer(int x):number(x){//inline constructor with base member initialization
  puts("Constructor");
}

inline integer::~integer(){
  puts("Destructor");
}

inline void integer::increment(int x){//this pointer to instance of class integer.Under the hood increment(this,int x), takes two arguments, the first one is the address of an instance (this) of class integer.
  this->number+=x;
}

inline int integer::get(void) const{
  return this->number;
}



int main(){

  integer in1;
  printf("Result is %d\n",in1.get());
  in1.increment(10);
  printf("Result is %d\n",in1.get());


  return 0;
}

	 
