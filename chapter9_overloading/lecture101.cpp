/* prefix postfix increment overloading */

#include<iostream>
using namespace std;

class integer{
private:
  int number;
public:
  inline integer(int=0);//constructor
  inline ~integer();//destructor
  integer& operator+(const integer&);
  integer& operator++();//prefix
  integer operator++(int);//postfix
  inline int get(void) const;//accessor function
};

inline integer::integer(int x):number(x){}//base member initialization

inline integer::~integer(){};

integer& integer::operator+(const integer& ref){
  number= number+ref.number;
  return *this;//returns instance(this is pointer of the instance). It is return as reference(integer&)
}

integer& integer::operator++(){
  ++number;
  return *this;
}

integer integer::operator++(int){//operator++(0) is recognized as postfix
  integer temp;
  temp.number= number;
  number++;
  return temp;
}

inline int integer::get(void) const{
  return number;
}


int main(){
  integer in1(5), in2(7), in3(9), in4;

  in4= in1+in2+in3;

  cout<<in4.get()<<endl;

  integer in5;
  in5 = ++in4;
  cout<<in5.get()<<endl;

  in5=in4++;
  cout<<in5.get()<<endl;
  return 0;
}
