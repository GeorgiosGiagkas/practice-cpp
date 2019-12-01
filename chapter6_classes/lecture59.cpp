/* Use inline function*/

#include<stdio.h>

/*In general, compiler honors inline function if the funstion is small, contain no loops, switch cases, recursion, static data member. In line function  can be global or class member. */

inline int abs(int x){//inline for declaration/definition of funcion
  return x<0 ? -x : x; //ternary operator
}


class integer{
private:
  int number;
public:
  inline void store(int);//good programing practice and avoids potential mistakes (use inline in declaration also)
  inline int print(void);
};

inline void integer::store(int x){//inline keyword in function definition
  number=x;
}

inline int integer::print(void){
  return number;
}






int main(){

  int i;//counter
  for(i=-2;i<3;i++){
    printf("%d\n", abs(i));
  }


  integer in;//instansiation of class integer

  in.store(5);
  printf("Print stored value: %d\n", in.print() );
  
  return 0;
}
	   
