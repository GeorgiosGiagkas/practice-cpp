/* Friend functions is not a class member function */

#include<stdio.h>

class integer{
private:
  int num;
public:
  inline integer(int=0);//constructor
  friend int get(const integer&);//friend function takes constant reference of integer. Caution! Friend fuction is neither public or private
};

inline integer::integer(int x):num(x){}//constructor withe base member initialazation

/*
friend fuction. No friend keyword to define it, only in declaration. Gets access to private data member num of class integer. No scope resolution operator because it is not a class member function. Constant reference is used to avoid changed in actual instance of class integer that is used as actual argument
*/
inline int get(const integer& inref){
  return inref.num;
}



int main(){
  integer in = 1; //c style initialization

  printf("Result is %d\n",get(in));//instance in is sent as reference to friend funstion

  return 0;
}

  
