/*program 02*/

#include<stdio.h>
#include<math.h>

class exponent{

  class integer{
  private:
    int number;
  public:
    inline void store(int=1);
    inline int get(void) const;
  };

private:
  integer in1,in2;
public:
  inline void store(int =1, int=1);
  inline int get1(void) const;
  inline int get2(void) const;
  inline double power(void) const;
};

inline void exponent::integer::store(int x){
  number=x;
}

inline int exponent::integer::get(void) const{
  return number;
}

inline void exponent::store(int x, int y){
  in1.store(x);
  in2.store(y);
}

inline int exponent::get1(void) const{
  return in1.get();
}

inline int exponent::get2(void) const{
  return in2.get();
}

inline double exponent::power(void) const{
  return pow(get1(), get2());
}



int main(){
  exponent ex;
  ex.store(5,3);

  printf("%d raised to the power of %d = %0.0lf\n",ex.get1(), ex.get2(), ex.power() );

  return 0;
}
