/*program 01*/

#include<stdio.h>
#include<math.h>

class integer{//class name

private://access modifier
  int number;

public:
  inline void store(int=1);//mutator
  inline int get(void) const;//accessor
};

inline void integer::store(int x){//function definition
  number=x;
}

inline int integer::get(void) const{
  return number;
}

class exponent{//class name
private:
  integer in1, in2;//instances of class integer inside class exponent
public:
  inline void store(int=1, int=1);//mutator with default values
  inline int get1(void) const;//accessor
  inline int get2(void) const;//accesoor
  inline double power(void) const;//accessor
};

inline void exponent::store(int x, int y){
  in1.store(x);
  in2.store(y);
}

inline int exponent::get1(void) const{
  in1.get();
}

inline int exponent::get2(void) const{
  in2.get();
}

inline double exponent::power(void) const{
  return pow(get1(),get2());//use math.h pow for power
}

int main(){
  exponent ex;//instantiate class exponent

  ex.store(5,3);
  printf("%d raised to the %d = %0.0lf\n", ex.get1(), ex.get2(), ex.power() );

  return 0;
}
