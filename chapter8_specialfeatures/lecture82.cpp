/* Function chaining */


#include<stdio.h>

class integer{
private:
  int num;
public:
  inline integer(int=0);//constructor with default argumen
  inline int get(void) const;//accessor function
  inline integer& increment(int);//mutator funtion
  inline ~integer();//destructor
};

inline integer::integer(int x):num(x){
  puts("Constructor");
}//cosntructor with base member initialization

inline integer::~integer(){
  puts("Destructor");
}//destructor

inline int integer::get(void) const{
  return this->num;
}

inline integer& integer::increment(int x){//mutator function return an reference instance of *this. (this is a pointer to the instance of class integer and *this is the instance itself. So it reterns integer& of *this.
  this->num += x;
  return *this;
}


int main(){

  integer in1;//instantiation

  in1.increment(1).increment(5).increment(10);//funstion chaining. in1.increment(1) returns an reference instance of class integer that is used for the invoking function increment(5) etc

  printf("Result is %d\n", in1.get());

  return 0;

}
