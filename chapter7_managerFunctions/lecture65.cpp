/*Constructor-taking-two-arguments-having-default-values */

#include<stdio.h>

class student{
private:
  int roll_no;
  double percentage;
public:
  inline student(int=0, double=0.0);//dual purpose. default constructor and parameterized constructor
  inline ~student();//destructor
  inline int getR(void) const;//accessor function
  inline double getP(void) const;//accessor function
};

inline student::student(int x, double y){
  roll_no=x;
  percentage=y;
  puts("Costructor");
}

inline student::~student(){
  puts("Destructor");
}

inline int student::getR(void) const{
  return roll_no;
}

inline double student::getP(void) const{
  return percentage;
}


int main(){
  student ryu;//instatiate class student. initialize with default constructor

  printf("Roll number: %d\tPercentage: %0.2lf\n",ryu.getR(), ryu.getP() );

  student akuma(10,89.2);//instantiate class student. initialize with parametarized constructor

  printf("Roll number: %d\tPercentage: %0.2lf\n",akuma.getR(), akuma.getP() );

  return 0;
}
