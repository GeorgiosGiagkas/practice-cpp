/* Contained class */

#include<stdio.h>

class integer{
private:
  int num;//data member non-static
public:
  inline integer(int=0);//constructor with default
  inline ~integer();//destructon
  inline int get() const;//accessor function
  inline integer& increment();//mutator function that returns reference of an instance(for function chaining)
};

inline integer::integer(int x):num(x){//constructor with base member initialazation
  puts("Constrctor Integer");
}

inline integer::~integer(){
  puts("Destructor Integer");
}

inline int integer::get(void) const{//accessor function
  return num;
}

inline integer& integer::increment(void){
  this->num += 1;
  return *this;//this is pointer of instance created. *this is the instance. So it returns the reference of *this
}


class keep_count{
private:
  //contained class instance
  static integer count;//static data member of class integer is created before main in static/global portion of memory
public:
  inline keep_count();//constructor
  inline ~keep_count();//destructor
  inline int print(void) const;//accessor funstion
};

integer keep_count::count = 0;//static data member definition (no static prefix, only in declaration)

inline keep_count::keep_count(){//constructor
  count.increment();
  puts("Constructor keep count");
}

inline keep_count::~keep_count(){
  puts("Destructor keep_count");
}

inline int keep_count::print(void) const{
  return count.get();
}


int main(){

  keep_count kc1;//class instantiation
  keep_count kc2, kc3;

  printf("Result is %d\n", kc1.print() );
  return 0;
}
